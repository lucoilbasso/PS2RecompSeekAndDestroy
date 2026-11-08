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

// Function: entry_00194238
// Address: 0x194238 - 0x194258
void entry_00194238_0x194238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00194238_0x194238");
#endif

    ctx->pc = 0x194238u;

    // 0x194238: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x194238u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x19423c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x19423cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x194240: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x194240u;
    {
        const bool branch_taken_0x194240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x194240) {
            ctx->pc = 0x194244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x194240u;
            // 0x194244: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x194270u;
            return;
        }
    }
    ctx->pc = 0x194248u;
    // 0x194248: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x194248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
    // 0x19424c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19424cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x194250: 0xc0685b8  jal         func_1A16E0
    ctx->pc = 0x194250u;
    SET_GPR_U32(ctx, 31, 0x194258u);
    ctx->pc = 0x194254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x194250u;
    // 0x194254: 0x2484de38  addiu       $a0, $a0, -0x21C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A16E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A16E0u, 0x194250u, 0x194258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x194258u;
}
