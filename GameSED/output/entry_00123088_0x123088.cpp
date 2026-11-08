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

// Function: entry_00123088
// Address: 0x123088 - 0x1230a8
void entry_00123088_0x123088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00123088_0x123088");
#endif

    ctx->pc = 0x123088u;

    // 0x123088: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x123088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
    // 0x12308c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x12308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x123090: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x123090u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x123094: 0x1440fe2e  bnez        $v0, . + 4 + (-0x1D2 << 2)
    ctx->pc = 0x123094u;
    {
        const bool branch_taken_0x123094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x123098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123094u;
        // 0x123098: 0xafa40080  sw          $a0, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123094) {
            ctx->pc = 0x122950u;
            return;
        }
    }
    ctx->pc = 0x12309Cu;
    // 0x12309c: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x12309cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1230a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1230a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1230a4: 0x24a40168  addiu       $a0, $a1, 0x168
    ctx->pc = 0x1230a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 360));
    ctx->pc = 0x1230a8u;
}
