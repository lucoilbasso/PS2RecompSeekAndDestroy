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

// Function: entry_00153858
// Address: 0x153858 - 0x153880
void entry_00153858_0x153858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00153858_0x153858");
#endif

    switch (ctx->pc) {
        case 0x153870u: goto label_153870;
        default: break;
    }

    ctx->pc = 0x153858u;

    // 0x153858: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x153858u;
    {
        const bool branch_taken_0x153858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153858u;
        // 0x15385c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x153858) {
            ctx->pc = 0x153884u;
            return;
        }
    }
    ctx->pc = 0x153860u;
    // 0x153860: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x153860u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
    // 0x153864: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x153864u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x153868: 0xc053d7c  jal         func_14F5F0
    ctx->pc = 0x153868u;
    SET_GPR_U32(ctx, 31, 0x153870u);
    ctx->pc = 0x15386Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153868u;
    // 0x15386c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14F5F0u, 0x153868u, 0x153870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153870u;
label_153870:
    // 0x153870: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x153870u;
    {
        const bool branch_taken_0x153870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x153874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153870u;
        // 0x153874: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x153870) {
            ctx->pc = 0x153880u;
            return;
        }
    }
    ctx->pc = 0x153878u;
    // 0x153878: 0xc053f58  jal         func_14FD60
    ctx->pc = 0x153878u;
    SET_GPR_U32(ctx, 31, 0x153880u);
    ctx->pc = 0x15387Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153878u;
    // 0x15387c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14FD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14FD60u, 0x153878u, 0x153880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x153880u;
}
