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

// Function: entry_0018fe68
// Address: 0x18fe68 - 0x18ff18
void entry_0018fe68_0x18fe68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fe68_0x18fe68");
#endif

    ctx->pc = 0x18fe68u;

    // 0x18fe68: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x18fe68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x18fe6c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x18fe6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18fe70: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x18fe70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x18fe74: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x18fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x18fe78: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x18fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x18fe7c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18fe80: 0xfd630008  sd          $v1, 0x8($t3)
    ctx->pc = 0x18fe80u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 8), GPR_U64(ctx, 3));
    // 0x18fe84: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18fe84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18fe88: 0x120202d  daddu       $a0, $t1, $zero
    ctx->pc = 0x18fe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe8c: 0xfd620000  sd          $v0, 0x0($t3)
    ctx->pc = 0x18fe8cu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 2));
    // 0x18fe90: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x18fe90u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18fe94: 0xc373c  dsll32      $a2, $t4, 28
    ctx->pc = 0x18fe94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) << (32 + 28));
    // 0x18fe98: 0x73bfc  dsll32      $a3, $a3, 15
    ctx->pc = 0x18fe98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 15));
    // 0x18fe9c: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x18fe9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x18fea0: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x18fea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18fea4: 0x847f8  dsll        $t0, $t0, 31
    ctx->pc = 0x18fea4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 31);
    // 0x18fea8: 0x8faa00f4  lw          $t2, 0xF4($sp)
    ctx->pc = 0x18fea8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x18feac: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x18feacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x18feb0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x18feb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x18feb4: 0x3c160022  lui         $s6, 0x22
    ctx->pc = 0x18feb4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)34 << 16));
    // 0x18feb8: 0x2c3b021  addu        $s6, $s6, $v1
    ctx->pc = 0x18feb8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
    // 0x18febc: 0x8ed6ee58  lw          $s6, -0x11A8($s6)
    ctx->pc = 0x18febcu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962776)));
    // 0x18fec0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x18fec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x18fec4: 0x8e260174  lw          $a2, 0x174($s1)
    ctx->pc = 0x18fec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 372)));
    // 0x18fec8: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x18fec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x18fecc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x18feccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fed0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x18fed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x18fed4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18fed4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fed8: 0x8d4c01d8  lw          $t4, 0x1D8($t2)
    ctx->pc = 0x18fed8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 472)));
    // 0x18fedc: 0x8e2b016c  lw          $t3, 0x16C($s1)
    ctx->pc = 0x18fedcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 364)));
    // 0x18fee0: 0x8e2a0170  lw          $t2, 0x170($s1)
    ctx->pc = 0x18fee0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 368)));
    // 0x18fee4: 0xfc8d0008  sd          $t5, 0x8($a0)
    ctx->pc = 0x18fee4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 13));
    // 0x18fee8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x18fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x18feec: 0x9622015a  lhu         $v0, 0x15A($s1)
    ctx->pc = 0x18feecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
    // 0x18fef0: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x18FEF0u;
    {
        const bool branch_taken_0x18fef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FEF0u;
        // 0x18fef4: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fef0) {
            ctx->pc = 0x190020u;
            return;
        }
    }
    ctx->pc = 0x18FEF8u;
    // 0x18fef8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x18fef8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x18fefc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x18fefcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x18ff00: 0x262f0150  addiu       $t7, $s1, 0x150
    ctx->pc = 0x18ff00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 17), 336));
    // 0x18ff04: 0x27b900c0  addiu       $t9, $sp, 0xC0
    ctx->pc = 0x18ff04u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x18ff08: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x18ff08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18ff0c: 0x340d8000  ori         $t5, $zero, 0x8000
    ctx->pc = 0x18ff0cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x18ff10: 0x24180003  addiu       $t8, $zero, 0x3
    ctx->pc = 0x18ff10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18ff14: 0x0  nop
    ctx->pc = 0x18ff14u;
    // NOP
    ctx->pc = 0x18ff18u;
}
