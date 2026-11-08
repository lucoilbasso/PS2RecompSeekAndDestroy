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

// Function: entry_0013e47c
// Address: 0x13e47c - 0x13e4e0
void entry_0013e47c_0x13e47c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013e47c_0x13e47c");
#endif

    ctx->pc = 0x13e47cu;

    // 0x13e47c: 0x8f858c50  lw          $a1, -0x73B0($gp)
    ctx->pc = 0x13e47cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937680)));
    // 0x13e480: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x13e484: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13e484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13e488: 0x2406fff3  addiu       $a2, $zero, -0xD
    ctx->pc = 0x13e488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x13e48c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13e48cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13e490: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x13e490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
    // 0x13e494: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x13e494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x13e498: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x13e498u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x13e49c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x13e4a0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x13e4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x13e4a4: 0x34630145  ori         $v1, $v1, 0x145
    ctx->pc = 0x13e4a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)325);
    // 0x13e4a8: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x13e4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
    // 0x13e4ac: 0xafa300b0  sw          $v1, 0xB0($sp)
    ctx->pc = 0x13e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
    // 0x13e4b0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x13e4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x13e4b4: 0x8e220094  lw          $v0, 0x94($s1)
    ctx->pc = 0x13e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 148)));
    // 0x13e4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13E4B8u;
    {
        const bool branch_taken_0x13e4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4B8u;
        // 0x13e4bc: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4b8) {
            ctx->pc = 0x13E4E0u;
            return;
        }
    }
    ctx->pc = 0x13E4C0u;
    // 0x13e4c0: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x13e4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x13e4c4: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x13e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e4c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13e4cc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x13e4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x13e4d0: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x13e4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13e4d4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13E4D4u;
    {
        const bool branch_taken_0x13e4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13E4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13E4D4u;
        // 0x13e4d8: 0xae230098  sw          $v1, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e4d4) {
            ctx->pc = 0x13E514u;
            return;
        }
    }
    ctx->pc = 0x13E4DCu;
    // 0x13e4dc: 0x0  nop
    ctx->pc = 0x13e4dcu;
    // NOP
    ctx->pc = 0x13e4e0u;
}
