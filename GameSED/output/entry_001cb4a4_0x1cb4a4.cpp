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

// Function: entry_001cb4a4
// Address: 0x1cb4a4 - 0x1cb4d8
void entry_001cb4a4_0x1cb4a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4a4_0x1cb4a4");
#endif

    switch (ctx->pc) {
        case 0x1cb4acu: goto label_1cb4ac;
        case 0x1cb4c0u: goto label_1cb4c0;
        default: break;
    }

    ctx->pc = 0x1cb4a4u;

    // 0x1cb4a4: 0xc0742fc  jal         func_1D0BF0
    ctx->pc = 0x1CB4A4u;
    SET_GPR_U32(ctx, 31, 0x1CB4ACu);
    ctx->pc = 0x1D0BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0BF0u, 0x1CB4A4u, 0x1CB4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4ACu;
label_1cb4ac:
    // 0x1cb4ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1cb4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1cb4b0: 0x2605c008  addiu       $a1, $s0, -0x3FF8
    ctx->pc = 0x1cb4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294950920));
    // 0x1cb4b4: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x1cb4b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1cb4b8: 0xc074266  jal         func_1D0998
    ctx->pc = 0x1CB4B8u;
    SET_GPR_U32(ctx, 31, 0x1CB4C0u);
    ctx->pc = 0x1CB4BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB4B8u;
    // 0x1cb4bc: 0x26500001  addiu       $s0, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D0998u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D0998u, 0x1CB4B8u, 0x1CB4C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB4C0u;
label_1cb4c0:
    // 0x1cb4c0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB4C0u;
    {
        const bool branch_taken_0x1cb4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cb4c0) {
            ctx->pc = 0x1CB4C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB4C0u;
            // 0x1cb4c4: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB4D8u;
            return;
        }
    }
    ctx->pc = 0x1CB4C8u;
    // 0x1cb4c8: 0x8a020003  lwl         $v0, 0x3($s0)
    ctx->pc = 0x1cb4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x1cb4cc: 0x9a020000  lwr         $v0, 0x0($s0)
    ctx->pc = 0x1cb4ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x1cb4d0: 0x26500005  addiu       $s0, $s2, 0x5
    ctx->pc = 0x1cb4d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 5));
    // 0x1cb4d4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1cb4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x1cb4d8u;
}
