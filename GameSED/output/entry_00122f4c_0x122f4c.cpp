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

// Function: entry_00122f4c
// Address: 0x122f4c - 0x122f78
void entry_00122f4c_0x122f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00122f4c_0x122f4c");
#endif

    ctx->pc = 0x122f4cu;

    // 0x122f4c: 0x8e520008  lw          $s2, 0x8($s2)
    ctx->pc = 0x122f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x122f50: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x122F50u;
    {
        const bool branch_taken_0x122f50 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x122F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F50u;
        // 0x122f54: 0x8fa3007c  lw          $v1, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f50) {
            ctx->pc = 0x122F78u;
            return;
        }
    }
    ctx->pc = 0x122F58u;
    // 0x122f58: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x122F58u;
    {
        const bool branch_taken_0x122f58 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F58u;
        // 0x122f5c: 0x2862000a  slti        $v0, $v1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f58) {
            ctx->pc = 0x122F7Cu;
            return;
        }
    }
    ctx->pc = 0x122F60u;
    // 0x122f60: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
    ctx->pc = 0x122F60u;
    {
        const bool branch_taken_0x122f60 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x122F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122F60u;
        // 0x122f64: 0x8fa6007c  lw          $a2, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122f60) {
            ctx->pc = 0x122F7Cu;
            return;
        }
    }
    ctx->pc = 0x122F68u;
    // 0x122f68: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x122f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x122f6c: 0x51300b  movn        $a2, $v0, $s1
    ctx->pc = 0x122f6cu;
    if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x122f70: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x122f70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
    // 0x122f74: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x122f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    ctx->pc = 0x122f78u;
}
