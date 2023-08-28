/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.yooo;

import javax.sound.sampled.*;
import java.io.*;
import java.util.Scanner;

public class Yooo {

   public static void main(String[] args) {
        Thread musicaThread = new Thread(() -> {
            try {
                File cancion = new File("devorame.wav");
                AudioInputStream archivo = AudioSystem.getAudioInputStream(cancion);
                Clip clip = AudioSystem.getClip();
                clip.open(archivo);
                clip.start();
                Thread.sleep(clip.getMicrosecondLength() / 1000);
            } catch (Exception e) {
                System.out.println("no se pudo reproducir musica " + e.getMessage());
            }
        });

        Thread entradaDatosThread = new Thread(() -> {
            try {
                Scanner scanner = new Scanner(System.in);
                System.out.print("ingrese usuaio: ");
                String nombre = scanner.nextLine();
                System.out.println("bienvenido, " + nombre );
            } catch (Exception e) {
                System.out.println("Error " + e.getMessage());
            }
        });

        musicaThread.start();
        entradaDatosThread.start();

        try {
            musicaThread.join();
            entradaDatosThread.join();
        } catch (InterruptedException e) {
            System.out.println("Error al esperar a que los hilos terminen: " + e.getMessage());
    }
}
}
