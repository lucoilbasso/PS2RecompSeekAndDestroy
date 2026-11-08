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

// Function: entry_0018ffb0
// Address: 0x18ffb0 - 0x18ffe8
void entry_0018ffb0_0x18ffb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ffb0_0x18ffb0");
#endif

    ctx->pc = 0x18ffb0u;

    // 0x18ffb0: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x18ffb0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x18ffb4: 0x7d220000  sq          $v0, 0x0($t1)
    ctx->pc = 0x18ffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 2));
    // 0x18ffb8: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
    ctx->pc = 0x18FFB8u;
    {
        const bool branch_taken_0x18ffb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFB8u;
        // 0x18ffbc: 0xad20000c  sw          $zero, 0xC($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffb8) {
            ctx->pc = 0x18FFF4u;
            return;
        }
    }
    ctx->pc = 0x18FFC0u;
    // 0x18ffc0: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x18ffc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x18ffc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FFC4u;
    {
        const bool branch_taken_0x18ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFC4u;
        // 0x18ffc8: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffc4) {
            ctx->pc = 0x18FFE8u;
            return;
        }
    }
    ctx->pc = 0x18FFCCu;
    // 0x18ffcc: 0xad2d000c  sw          $t5, 0xC($t1)
    ctx->pc = 0x18ffccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 13));
    // 0x18ffd0: 0x16180008  bne         $s0, $t8, . + 4 + (0x8 << 2)
    ctx->pc = 0x18FFD0u;
    {
        const bool branch_taken_0x18ffd0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 24));
        ctx->pc = 0x18FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFD0u;
        // 0x18ffd4: 0x34e70001  ori         $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffd0) {
            ctx->pc = 0x18FFF4u;
            return;
        }
    }
    ctx->pc = 0x18FFD8u;
    // 0x18ffd8: 0x55000007  bnel        $t0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x18FFD8u;
    {
        const bool branch_taken_0x18ffd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x18ffd8) {
            ctx->pc = 0x18FFDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18FFD8u;
            // 0x18ffdc: 0x9622015a  lhu         $v0, 0x15A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 346)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x18FFF8u;
            return;
        }
    }
    ctx->pc = 0x18FFE0u;
    // 0x18ffe0: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x18FFE0u;
    {
        const bool branch_taken_0x18ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18FFE0u;
        // 0x18ffe4: 0x8e420094  lw          $v0, 0x94($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18ffe0) {
            ctx->pc = 0x190118u;
            return;
        }
    }
    ctx->pc = 0x18FFE8u;
}
