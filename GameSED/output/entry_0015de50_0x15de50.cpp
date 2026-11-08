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

// Function: entry_0015de50
// Address: 0x15de50 - 0x15de78
void entry_0015de50_0x15de50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015de50_0x15de50");
#endif

    ctx->pc = 0x15de50u;

    // 0x15de50: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x15de50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x15de54: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x15de54u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
    // 0x15de58: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15de5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15DE5Cu;
    {
        const bool branch_taken_0x15de5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15DE5Cu;
        // 0x15de60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15de5c) {
            ctx->pc = 0x15DE78u;
            return;
        }
    }
    ctx->pc = 0x15DE64u;
    // 0x15de64: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x15de64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x15de68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x15de68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15de6c: 0x28a22000  slti        $v0, $a1, 0x2000
    ctx->pc = 0x15de6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8192) ? 1 : 0);
    // 0x15de70: 0xc056a82  jal         func_15AA08
    ctx->pc = 0x15DE70u;
    SET_GPR_U32(ctx, 31, 0x15DE78u);
    ctx->pc = 0x15DE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15DE70u;
    // 0x15de74: 0x262300a  movz        $a2, $s3, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15AA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15AA08u, 0x15DE70u, 0x15DE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15DE78u;
}
