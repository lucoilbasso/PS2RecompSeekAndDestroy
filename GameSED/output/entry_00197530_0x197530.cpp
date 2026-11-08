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

// Function: entry_00197530
// Address: 0x197530 - 0x197570
void entry_00197530_0x197530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00197530_0x197530");
#endif

    switch (ctx->pc) {
        case 0x197538u: goto label_197538;
        case 0x197550u: goto label_197550;
        case 0x197568u: goto label_197568;
        default: break;
    }

    ctx->pc = 0x197530u;

    // 0x197530: 0xc065ae4  jal         func_196B90
    ctx->pc = 0x197530u;
    SET_GPR_U32(ctx, 31, 0x197538u);
    ctx->pc = 0x197534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197530u;
    // 0x197534: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x196B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x196B90u, 0x197530u, 0x197538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197538u;
label_197538:
    // 0x197538: 0xde220030  ld          $v0, 0x30($s1)
    ctx->pc = 0x197538u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x19753c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19753cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197540: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x197540u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197544: 0xfe420220  sd          $v0, 0x220($s2)
    ctx->pc = 0x197544u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 544), GPR_U64(ctx, 2));
    // 0x197548: 0xc0663f0  jal         func_198FC0
    ctx->pc = 0x197548u;
    SET_GPR_U32(ctx, 31, 0x197550u);
    ctx->pc = 0x19754Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197548u;
    // 0x19754c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x198FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x198FC0u, 0x197548u, 0x197550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197550u;
label_197550:
    // 0x197550: 0x8e260024  lw          $a2, 0x24($s1)
    ctx->pc = 0x197550u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x197554: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x197554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x197558: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x197558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x19755c: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x19755cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x197560: 0xc065dcc  jal         func_197730
    ctx->pc = 0x197560u;
    SET_GPR_U32(ctx, 31, 0x197568u);
    ctx->pc = 0x197564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x197560u;
    // 0x197564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x197730u, 0x197560u, 0x197568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x197568u;
label_197568:
    // 0x197568: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x197568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x19756c: 0x34639000  ori         $v1, $v1, 0x9000
    ctx->pc = 0x19756cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)36864);
    ctx->pc = 0x197570u;
}
