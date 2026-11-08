#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_001297ac
// Address: 0x1297ac - 0x1298c4
void entry_001297ac_0x1297ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001297ac_0x1297ac");
#endif

    ctx->pc = 0x1297acu;

    // 0x1297ac: 0xafb000c8  sw          $s0, 0xC8($sp)
    ctx->pc = 0x1297acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 16));
    // 0x1297b0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x1297b0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x1297b4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x1297b4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x1297b8: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x1297b8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x1297bc: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x1297bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x1297c0: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x1297c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1297c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1297c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1297c8: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x1297c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1297cc: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1297ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1297d0: 0x3c0c0007  lui         $t4, 0x7
    ctx->pc = 0x1297d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)7 << 16));
    // 0x1297d4: 0x358c000d  ori         $t4, $t4, 0xD
    ctx->pc = 0x1297d4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)13);
    // 0x1297d8: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x1297d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1297dc: 0x24450020  addiu       $a1, $v0, 0x20
    ctx->pc = 0x1297dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1297e0: 0x24070047  addiu       $a3, $zero, 0x47
    ctx->pc = 0x1297e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x1297e4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1297e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x1297e8: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1297e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1297ec: 0x24490030  addiu       $t1, $v0, 0x30
    ctx->pc = 0x1297ecu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1297f0: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1297f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1297f4: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x1297f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1297f8: 0xfca70008  sd          $a3, 0x8($a1)
    ctx->pc = 0x1297f8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 7));
    // 0x1297fc: 0x3c070020  lui         $a3, 0x20
    ctx->pc = 0x1297fcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32 << 16));
    // 0x129800: 0xfcac0000  sd          $t4, 0x0($a1)
    ctx->pc = 0x129800u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 12));
    // 0x129804: 0x240c0014  addiu       $t4, $zero, 0x14
    ctx->pc = 0x129804u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x129808: 0x240a004e  addiu       $t2, $zero, 0x4E
    ctx->pc = 0x129808u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x12980c: 0x24440040  addiu       $a0, $v0, 0x40
    ctx->pc = 0x12980cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x129810: 0xdf838c90  ld          $v1, -0x7370($gp)
    ctx->pc = 0x129810u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x129814: 0x244d0050  addiu       $t5, $v0, 0x50
    ctx->pc = 0x129814u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x129818: 0xfd2a0008  sd          $t2, 0x8($t1)
    ctx->pc = 0x129818u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 10));
    // 0x12981c: 0x27aa0060  addiu       $t2, $sp, 0x60
    ctx->pc = 0x12981cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x129820: 0xfd230000  sd          $v1, 0x0($t1)
    ctx->pc = 0x129820u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 3));
    // 0x129824: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x129824u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129828: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x129828u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x12982c: 0x240e0080  addiu       $t6, $zero, 0x80
    ctx->pc = 0x12982cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x129830: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x129834: 0x240b0042  addiu       $t3, $zero, 0x42
    ctx->pc = 0x129834u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x129838: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x129838u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x12983c: 0x24500060  addiu       $s0, $v0, 0x60
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x129840: 0x8cc30030  lw          $v1, 0x30($a2)
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x129844: 0x3c060022  lui         $a2, 0x22
    ctx->pc = 0x129844u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)34 << 16));
    // 0x129848: 0xfc8b0008  sd          $t3, 0x8($a0)
    ctx->pc = 0x129848u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 11));
    // 0x12984c: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x129850: 0xac8e0004  sw          $t6, 0x4($a0)
    ctx->pc = 0x129850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 14));
    // 0x129854: 0x27ae0070  addiu       $t6, $sp, 0x70
    ctx->pc = 0x129854u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x129858: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x129858u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x12985c: 0x24520070  addiu       $s2, $v0, 0x70
    ctx->pc = 0x12985cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x129860: 0xfdac0008  sd          $t4, 0x8($t5)
    ctx->pc = 0x129860u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 12));
    // 0x129864: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x129864u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x129868: 0xfdaf0000  sd          $t7, 0x0($t5)
    ctx->pc = 0x129868u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 15));
    // 0x12986c: 0x27ad0090  addiu       $t5, $sp, 0x90
    ctx->pc = 0x12986cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x129870: 0xc79d8110  lwc1        $f29, -0x7EF0($gp)
    ctx->pc = 0x129870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934800)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x129874: 0x24d9ebf0  addiu       $t9, $a2, -0x1410
    ctx->pc = 0x129874u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962160));
    // 0x129878: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x129878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x12987c: 0x24f491c0  addiu       $s4, $a3, -0x6E40
    ctx->pc = 0x12987cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939072));
    // 0x129880: 0x8fb600d4  lw          $s6, 0xD4($sp)
    ctx->pc = 0x129880u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 212)));
    // 0x129884: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x129884u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129888: 0x8c4300d0  lw          $v1, 0xD0($v0)
    ctx->pc = 0x129888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 208)));
    // 0x12988c: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x12988cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x129890: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x129890u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x129894: 0x94650030  lhu         $a1, 0x30($v1)
    ctx->pc = 0x129894u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x129898: 0xdc640038  ld          $a0, 0x38($v1)
    ctx->pc = 0x129898u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x12989c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x12989cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x1298a0: 0xfe110008  sd          $s1, 0x8($s0)
    ctx->pc = 0x1298a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 17));
    // 0x1298a4: 0x2117c  dsll32      $v0, $v0, 5
    ctx->pc = 0x1298a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 5));
    // 0x1298a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1298a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1298ac: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x1298acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x1298b0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1298b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x1298b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1298b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298b8: 0xfe040000  sd          $a0, 0x0($s0)
    ctx->pc = 0x1298b8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 4));
    // 0x1298bc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1298BCu;
    {
        const bool branch_taken_0x1298bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1298bc) {
            ctx->pc = 0x1298C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1298BCu;
            // 0x1298c0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1298C4u;
            return;
        }
    }
    ctx->pc = 0x1298C4u;
}
