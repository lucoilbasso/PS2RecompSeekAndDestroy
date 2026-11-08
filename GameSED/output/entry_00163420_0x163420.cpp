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

// Function: entry_00163420
// Address: 0x163420 - 0x163450
void entry_00163420_0x163420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163420_0x163420");
#endif

    switch (ctx->pc) {
        case 0x163428u: goto label_163428;
        default: break;
    }

    ctx->pc = 0x163420u;

    // 0x163420: 0xc06a26e  jal         func_1A89B8
    ctx->pc = 0x163420u;
    SET_GPR_U32(ctx, 31, 0x163428u);
    ctx->pc = 0x163424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x163420u;
    // 0x163424: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A89B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A89B8u, 0x163420u, 0x163428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x163428u;
label_163428:
    // 0x163428: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x163428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16342c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x16342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x163430: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x163430u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x163434: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x163434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x163438: 0x24630150  addiu       $v1, $v1, 0x150
    ctx->pc = 0x163438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
    // 0x16343c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x16343cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    // 0x163440: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x163440u;
    {
        const bool branch_taken_0x163440 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x163444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163440u;
        // 0x163444: 0x2c32821  addu        $a1, $s6, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163440) {
            ctx->pc = 0x163450u;
            return;
        }
    }
    ctx->pc = 0x163448u;
    // 0x163448: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x163448u;
    {
        const bool branch_taken_0x163448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x163448u;
        // 0x16344c: 0x8e2201b4  lw          $v0, 0x1B4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x163448) {
            ctx->pc = 0x16348Cu;
            return;
        }
    }
    ctx->pc = 0x163450u;
}
