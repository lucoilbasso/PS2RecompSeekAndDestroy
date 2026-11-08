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

// Function: entry_00189914
// Address: 0x189914 - 0x1899f0
void entry_00189914_0x189914(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189914_0x189914");
#endif

    ctx->pc = 0x189914u;

    // 0x189914: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x189914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x189918: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x189918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x18991c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x18991cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x189920: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x189920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x189924: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x189924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x189928: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x189928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x18992c: 0x24820020  addiu       $v0, $a0, 0x20
    ctx->pc = 0x18992cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x189930: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x189930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x189934: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x189934u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x189938: 0x24900060  addiu       $s0, $a0, 0x60
    ctx->pc = 0x189938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x18993c: 0xfc430008  sd          $v1, 0x8($v0)
    ctx->pc = 0x18993cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 3));
    // 0x189940: 0x3c050022  lui         $a1, 0x22
    ctx->pc = 0x189940u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)34 << 16));
    // 0x189944: 0xfc460000  sd          $a2, 0x0($v0)
    ctx->pc = 0x189944u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
    // 0x189948: 0x24860030  addiu       $a2, $a0, 0x30
    ctx->pc = 0x189948u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x18994c: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x18994cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x189950: 0x24890040  addiu       $t1, $a0, 0x40
    ctx->pc = 0x189950u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x189954: 0x90a7ed80  lbu         $a3, -0x1280($a1)
    ctx->pc = 0x189954u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)FAST_READ8(0x21ED80u));
    // 0x189958: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x189958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x18995c: 0x24020042  addiu       $v0, $zero, 0x42
    ctx->pc = 0x18995cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x189960: 0x3c0a0003  lui         $t2, 0x3
    ctx->pc = 0x189960u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)3 << 16));
    // 0x189964: 0x354a000d  ori         $t2, $t2, 0xD
    ctx->pc = 0x189964u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)13);
    // 0x189968: 0x2081823  subu        $v1, $s0, $t0
    ctx->pc = 0x189968u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 8)));
    // 0x18996c: 0xfcc20008  sd          $v0, 0x8($a2)
    ctx->pc = 0x18996cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
    // 0x189970: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x189970u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x189974: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x189974u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x189978: 0xfd250008  sd          $a1, 0x8($t1)
    ctx->pc = 0x189978u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 8), GPR_U64(ctx, 5));
    // 0x18997c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x18997cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x189980: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x189980u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x189984: 0xfd2a0000  sd          $t2, 0x0($t1)
    ctx->pc = 0x189984u;
    WRITE64(ADD32(GPR_U32(ctx, 9), 0), GPR_U64(ctx, 10));
    // 0x189988: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x189988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18998c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x18998cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x189990: 0x24840050  addiu       $a0, $a0, 0x50
    ctx->pc = 0x189990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x189994: 0xdf868c90  ld          $a2, -0x7370($gp)
    ctx->pc = 0x189994u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294937744)));
    // 0x189998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x189998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18999c: 0x3c020027  lui         $v0, 0x27
    ctx->pc = 0x18999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39 << 16));
    // 0x1899a0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1899a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1899a4: 0x2447dd80  addiu       $a3, $v0, -0x2280
    ctx->pc = 0x1899a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958464));
    // 0x1899a8: 0x2402004e  addiu       $v0, $zero, 0x4E
    ctx->pc = 0x1899a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x1899ac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1899acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1899b0: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x1899b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x1899b4: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x1899b4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
    // 0x1899b8: 0xfd050008  sd          $a1, 0x8($t0)
    ctx->pc = 0x1899b8u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 5));
    // 0x1899bc: 0xfd030000  sd          $v1, 0x0($t0)
    ctx->pc = 0x1899bcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
    // 0x1899c0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x1899c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1899c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1899C4u;
    {
        const bool branch_taken_0x1899c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899C4u;
        // 0x1899c8: 0x24e90010  addiu       $t1, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899c4) {
            ctx->pc = 0x1899F0u;
            return;
        }
    }
    ctx->pc = 0x1899CCu;
    // 0x1899cc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1899ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x1899d0: 0x3463444e  ori         $v1, $v1, 0x444E
    ctx->pc = 0x1899d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17486);
    // 0x1899d4: 0x3c025022  lui         $v0, 0x5022
    ctx->pc = 0x1899d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20514 << 16));
    // 0x1899d8: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x1899d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x1899dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1899dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1899e0: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x1899e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x1899e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1899E4u;
    {
        const bool branch_taken_0x1899e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1899E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1899E4u;
        // 0x1899e8: 0xfce20000  sd          $v0, 0x0($a3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1899e4) {
            ctx->pc = 0x189A08u;
            return;
        }
    }
    ctx->pc = 0x1899ECu;
    // 0x1899ec: 0x0  nop
    ctx->pc = 0x1899ecu;
    // NOP
    ctx->pc = 0x1899f0u;
}
