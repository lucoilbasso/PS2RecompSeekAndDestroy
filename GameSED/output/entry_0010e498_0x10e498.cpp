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

// Function: entry_0010e498
// Address: 0x10e498 - 0x10e4d4
void entry_0010e498_0x10e498(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e498_0x10e498");
#endif

    ctx->pc = 0x10e498u;

    // 0x10e498: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x10E498u;
    {
        const bool branch_taken_0x10e498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E498u;
        // 0x10e49c: 0xae250158  sw          $a1, 0x158($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e498) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E4A0u;
    // 0x10e4a0: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x10e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x10e4a4: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x10e4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
    // 0x10e4a8: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x10e4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x10e4ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10e4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10e4b0: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10E4B0u;
    {
        const bool branch_taken_0x10e4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4B0u;
        // 0x10e4b4: 0xae24015c  sw          $a0, 0x15C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4b0) {
            ctx->pc = 0x10E4E4u;
            return;
        }
    }
    ctx->pc = 0x10E4B8u;
    // 0x10e4b8: 0x26300160  addiu       $s0, $s1, 0x160
    ctx->pc = 0x10e4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 352));
    // 0x10e4bc: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x10e4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x10e4c0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10e4c4: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E4C4u;
    {
        const bool branch_taken_0x10e4c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E4C4u;
        // 0x10e4c8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e4c4) {
            ctx->pc = 0x10E4D4u;
            return;
        }
    }
    ctx->pc = 0x10E4CCu;
    // 0x10e4cc: 0xc067f04  jal         func_19FC10
    ctx->pc = 0x10E4CCu;
    SET_GPR_U32(ctx, 31, 0x10E4D4u);
    ctx->pc = 0x10E4D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E4CCu;
    // 0x10e4d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FC10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FC10u, 0x10E4CCu, 0x10E4D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10E4D4u;
}
