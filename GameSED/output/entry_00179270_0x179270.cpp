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

// Function: entry_00179270
// Address: 0x179270 - 0x1792a0
void entry_00179270_0x179270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00179270_0x179270");
#endif

    ctx->pc = 0x179270u;

    // 0x179270: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x179270u;
    {
        const bool branch_taken_0x179270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x179270) {
            ctx->pc = 0x1792A0u;
            return;
        }
    }
    ctx->pc = 0x179278u;
    // 0x179278: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x179278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x17927c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17927Cu;
    {
        const bool branch_taken_0x17927c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17927c) {
            ctx->pc = 0x1792A0u;
            return;
        }
    }
    ctx->pc = 0x179284u;
    // 0x179284: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x179284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179288: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x179288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x17928c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x17928cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x179290: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x179290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x179294: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x179294u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x179298: 0x5460002b  bnel        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x179298u;
    {
        const bool branch_taken_0x179298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x179298) {
            ctx->pc = 0x17929Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179298u;
            // 0x17929c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179348u;
            return;
        }
    }
    ctx->pc = 0x1792A0u;
}
