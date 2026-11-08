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

// Function: entry_00155f4c
// Address: 0x155f4c - 0x155f78
void entry_00155f4c_0x155f4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00155f4c_0x155f4c");
#endif

    ctx->pc = 0x155f4cu;

    // 0x155f4c: 0x10a20012  beq         $a1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x155F4Cu;
    {
        const bool branch_taken_0x155f4c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F4Cu;
        // 0x155f50: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f4c) {
            ctx->pc = 0x155F98u;
            return;
        }
    }
    ctx->pc = 0x155F54u;
    // 0x155f54: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x155f54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x155f58: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x155F58u;
    {
        const bool branch_taken_0x155f58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F58u;
        // 0x155f5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f58) {
            ctx->pc = 0x155F78u;
            return;
        }
    }
    ctx->pc = 0x155F60u;
    // 0x155f60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x155f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x155f64: 0x10a2000a  beq         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x155F64u;
    {
        const bool branch_taken_0x155f64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x155F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F64u;
        // 0x155f68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f64) {
            ctx->pc = 0x155F90u;
            return;
        }
    }
    ctx->pc = 0x155F6Cu;
    // 0x155f6c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x155F6Cu;
    {
        const bool branch_taken_0x155f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155F6Cu;
        // 0x155f70: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155f6c) {
            ctx->pc = 0x156008u;
            return;
        }
    }
    ctx->pc = 0x155F74u;
    // 0x155f74: 0x0  nop
    ctx->pc = 0x155f74u;
    // NOP
    ctx->pc = 0x155f78u;
}
