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

// Function: entry_001a19b8
// Address: 0x1a19b8 - 0x1a19e4
void entry_001a19b8_0x1a19b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a19b8_0x1a19b8");
#endif

    ctx->pc = 0x1a19b8u;

    // 0x1a19b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a19b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a19bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a19bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1a19c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1a19c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1a19c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a19c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1a19c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1a19cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1a19ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1a19d0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1a19d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1a19d4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A19D4u;
    {
        const bool branch_taken_0x1a19d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A19D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A19D4u;
        // 0x1a19d8: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a19d4) {
            ctx->pc = 0x1A19E4u;
            return;
        }
    }
    ctx->pc = 0x1A19DCu;
    // 0x1a19dc: 0xc06bd1c  jal         func_1AF470
    ctx->pc = 0x1A19DCu;
    SET_GPR_U32(ctx, 31, 0x1A19E4u);
    ctx->pc = 0x1AF470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF470u, 0x1A19DCu, 0x1A19E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A19E4u;
}
