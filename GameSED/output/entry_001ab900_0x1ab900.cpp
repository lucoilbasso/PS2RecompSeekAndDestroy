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

// Function: entry_001ab900
// Address: 0x1ab900 - 0x1ab94c
void entry_001ab900_0x1ab900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ab900_0x1ab900");
#endif

    switch (ctx->pc) {
        case 0x1ab908u: goto label_1ab908;
        default: break;
    }

    ctx->pc = 0x1ab900u;

    // 0x1ab900: 0xc06c3f0  jal         func_1B0FC0
    ctx->pc = 0x1AB900u;
    SET_GPR_U32(ctx, 31, 0x1AB908u);
    ctx->pc = 0x1B0FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0FC0u, 0x1AB900u, 0x1AB908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AB908u;
label_1ab908:
    // 0x1ab908: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x1ab908u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x1ab90c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x1ab90cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1ab910: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x1ab910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x1ab914: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x1ab914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x1ab918: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x1ab918u;
    runtime->Store64(rdram, ctx, 0x12001000u, GPR_U64(ctx, 4));
    // 0x1ab91c: 0x34631040  ori         $v1, $v1, 0x1040
    ctx->pc = 0x1ab91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4160);
    // 0x1ab920: 0xfc600000  sd          $zero, 0x0($v1)
    ctx->pc = 0x1ab920u;
    runtime->Store64(rdram, ctx, 0x12001040u, GPR_U64(ctx, 0));
    // 0x1ab924: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab928: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ab928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ab92c: 0x34423000  ori         $v0, $v0, 0x3000
    ctx->pc = 0x1ab92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)12288);
    // 0x1ab930: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1ab930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1ab934: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1ab934u;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 4));
    // 0x1ab938: 0x34633c10  ori         $v1, $v1, 0x3C10
    ctx->pc = 0x1ab938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15376);
    // 0x1ab93c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1ab940: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1ab940u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 4));
    // 0x1ab944: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x1AB944u;
    {
        const bool branch_taken_0x1ab944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AB948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB944u;
        // 0x1ab948: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab944) {
            ctx->pc = 0x1ABB68u;
            return;
        }
    }
    ctx->pc = 0x1AB94Cu;
}
