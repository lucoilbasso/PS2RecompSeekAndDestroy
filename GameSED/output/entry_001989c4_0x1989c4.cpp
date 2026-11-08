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

// Function: entry_001989c4
// Address: 0x1989c4 - 0x1989f0
void entry_001989c4_0x1989c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001989c4_0x1989c4");
#endif

    switch (ctx->pc) {
        case 0x1989d8u: goto label_1989d8;
        default: break;
    }

    ctx->pc = 0x1989c4u;

    // 0x1989c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1989c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1989c8: 0x3c012000  lui         $at, 0x2000
    ctx->pc = 0x1989c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8192 << 16));
    // 0x1989cc: 0x263021  addu        $a2, $at, $a2
    ctx->pc = 0x1989ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
    // 0x1989d0: 0xc0653c6  jal         func_194F18
    ctx->pc = 0x1989D0u;
    SET_GPR_U32(ctx, 31, 0x1989D8u);
    ctx->pc = 0x1989D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1989D0u;
    // 0x1989d4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x194F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194F18u, 0x1989D0u, 0x1989D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1989D8u;
label_1989d8:
    // 0x1989d8: 0x8eb101b0  lw          $s1, 0x1B0($s5)
    ctx->pc = 0x1989d8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 432)));
    // 0x1989dc: 0x1220002c  beqz        $s1, . + 4 + (0x2C << 2)
    ctx->pc = 0x1989DCu;
    {
        const bool branch_taken_0x1989dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1989dc) {
            ctx->pc = 0x198A90u;
            return;
        }
    }
    ctx->pc = 0x1989E4u;
    // 0x1989e4: 0x3c150010  lui         $s5, 0x10
    ctx->pc = 0x1989e4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)16 << 16));
    // 0x1989e8: 0x2414fff3  addiu       $s4, $zero, -0xD
    ctx->pc = 0x1989e8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1989ec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1989ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x1989f0u;
}
