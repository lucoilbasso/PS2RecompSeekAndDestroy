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

// Function: entry_001a6f44
// Address: 0x1a6f44 - 0x1a6f78
void entry_001a6f44_0x1a6f44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a6f44_0x1a6f44");
#endif

    ctx->pc = 0x1a6f44u;

    // 0x1a6f44: 0x28a20c00  slti        $v0, $a1, 0xC00
    ctx->pc = 0x1a6f44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3072) ? 1 : 0);
    // 0x1a6f48: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6F48u;
    {
        const bool branch_taken_0x1a6f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6f48) {
            ctx->pc = 0x1A6F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6F48u;
            // 0x1a6f4c: 0x28a20c40  slti        $v0, $a1, 0xC40 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3136) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6F78u;
            return;
        }
    }
    ctx->pc = 0x1A6F50u;
    // 0x1a6f50: 0x51942  srl         $v1, $a1, 5
    ctx->pc = 0x1a6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x1a6f54: 0x30a5001f  andi        $a1, $a1, 0x1F
    ctx->pc = 0x1a6f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x1a6f58: 0x26c4fb30  addiu       $a0, $s6, -0x4D0
    ctx->pc = 0x1a6f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294966064));
    // 0x1a6f5c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a6f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a6f60: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a6f60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1a6f64: 0xb32804  sllv        $a1, $s3, $a1
    ctx->pc = 0x1a6f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 5) & 0x1F));
    // 0x1a6f68: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a6f6c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x1a6f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x1a6f70: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A6F70u;
    {
        const bool branch_taken_0x1a6f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6F70u;
        // 0x1a6f74: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6f70) {
            ctx->pc = 0x1A6FB8u;
            return;
        }
    }
    ctx->pc = 0x1A6F78u;
}
