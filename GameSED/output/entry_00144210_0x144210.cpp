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

// Function: entry_00144210
// Address: 0x144210 - 0x144240
void entry_00144210_0x144210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00144210_0x144210");
#endif

    switch (ctx->pc) {
        case 0x144218u: goto label_144218;
        case 0x144238u: goto label_144238;
        default: break;
    }

    ctx->pc = 0x144210u;

    // 0x144210: 0xc05f39a  jal         func_17CE68
    ctx->pc = 0x144210u;
    SET_GPR_U32(ctx, 31, 0x144218u);
    ctx->pc = 0x17CE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CE68u, 0x144210u, 0x144218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144218u;
label_144218:
    // 0x144218: 0x142900  sll         $a1, $s4, 4
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x14421c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14421cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144220: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x144220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x144224: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x144224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144228: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x144228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x14422c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x14422cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144230: 0xc05f4cc  jal         func_17D330
    ctx->pc = 0x144230u;
    SET_GPR_U32(ctx, 31, 0x144238u);
    ctx->pc = 0x144234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144230u;
    // 0x144234: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D330u, 0x144230u, 0x144238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x144238u;
label_144238:
    // 0x144238: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x144238u;
    {
        const bool branch_taken_0x144238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144238u;
        // 0x14423c: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144238) {
            ctx->pc = 0x14429Cu;
            return;
        }
    }
    ctx->pc = 0x144240u;
}
