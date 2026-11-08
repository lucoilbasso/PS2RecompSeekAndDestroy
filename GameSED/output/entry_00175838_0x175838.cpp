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

// Function: entry_00175838
// Address: 0x175838 - 0x175850
void entry_00175838_0x175838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00175838_0x175838");
#endif

    ctx->pc = 0x175838u;

    // 0x175838: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x175838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x17583c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x17583cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x175840: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x175840u;
    {
        const bool branch_taken_0x175840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x175840) {
            ctx->pc = 0x175844u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x175840u;
            // 0x175844: 0x8e03002c  lw          $v1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17594Cu;
            return;
        }
    }
    ctx->pc = 0x175848u;
    // 0x175848: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x175848u;
    {
        const bool branch_taken_0x175848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17584Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175848u;
        // 0x17584c: 0x2502ffff  addiu       $v0, $t0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175848) {
            ctx->pc = 0x175858u;
            return;
        }
    }
    ctx->pc = 0x175850u;
}
