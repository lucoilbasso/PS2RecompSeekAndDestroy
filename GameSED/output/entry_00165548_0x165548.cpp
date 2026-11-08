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

// Function: entry_00165548
// Address: 0x165548 - 0x16559c
void entry_00165548_0x165548(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00165548_0x165548");
#endif

    ctx->pc = 0x165548u;

    // 0x165548: 0x5060003b  beql        $v1, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x165548u;
    {
        const bool branch_taken_0x165548 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x165548) {
            ctx->pc = 0x16554Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165548u;
            // 0x16554c: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x165550u;
    // 0x165550: 0x8e040c04  lw          $a0, 0xC04($s0)
    ctx->pc = 0x165550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x165554: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x165554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
    // 0x165558: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x165558u;
    {
        const bool branch_taken_0x165558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16555Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165558u;
        // 0x16555c: 0x94650030  lhu         $a1, 0x30($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165558) {
            ctx->pc = 0x1655E0u;
            return;
        }
    }
    ctx->pc = 0x165560u;
    // 0x165560: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x165560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x165564: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x165564u;
    {
        const bool branch_taken_0x165564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x165564) {
            ctx->pc = 0x165568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165564u;
            // 0x165568: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16559Cu;
            return;
        }
    }
    ctx->pc = 0x16556Cu;
    // 0x16556c: 0x8e420264  lw          $v0, 0x264($s2)
    ctx->pc = 0x16556cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
    // 0x165570: 0x30428800  andi        $v0, $v0, 0x8800
    ctx->pc = 0x165570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)34816);
    // 0x165574: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x165574u;
    {
        const bool branch_taken_0x165574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165574) {
            ctx->pc = 0x165578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165574u;
            // 0x165578: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16559Cu;
            return;
        }
    }
    ctx->pc = 0x16557Cu;
    // 0x16557c: 0x8c63001c  lw          $v1, 0x1C($v1)
    ctx->pc = 0x16557cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x165580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x165580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x165584: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x165584u;
    {
        const bool branch_taken_0x165584 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x165584) {
            ctx->pc = 0x165588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165584u;
            // 0x165588: 0x8e031234  lw          $v1, 0x1234($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16559Cu;
            return;
        }
    }
    ctx->pc = 0x16558Cu;
    // 0x16558c: 0x8e42070c  lw          $v0, 0x70C($s2)
    ctx->pc = 0x16558cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1804)));
    // 0x165590: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x165590u;
    {
        const bool branch_taken_0x165590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x165590) {
            ctx->pc = 0x165594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x165590u;
            // 0x165594: 0xdfb00030  ld          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x165638u;
            return;
        }
    }
    ctx->pc = 0x165598u;
    // 0x165598: 0x8e031234  lw          $v1, 0x1234($s0)
    ctx->pc = 0x165598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4660)));
    ctx->pc = 0x16559cu;
}
