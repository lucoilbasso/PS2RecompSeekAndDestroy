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

// Function: entry_001a8814
// Address: 0x1a8814 - 0x1a8848
void entry_001a8814_0x1a8814(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a8814_0x1a8814");
#endif

    ctx->pc = 0x1a8814u;

    // 0x1a8814: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8818: 0x3086001f  andi        $a2, $a0, 0x1F
    ctx->pc = 0x1a8818u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x1a881c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a881cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8820: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A8820u;
    {
        const bool branch_taken_0x1a8820 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8820u;
        // 0x1a8824: 0x28850c40  slti        $a1, $a0, 0xC40 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3136) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8820) {
            ctx->pc = 0x1A8848u;
            return;
        }
    }
    ctx->pc = 0x1A8828u;
    // 0x1a8828: 0x3c010024  lui         $at, 0x24
    ctx->pc = 0x1a8828u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)36 << 16));
    // 0x1a882c: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x1a882cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
    // 0x1a8830: 0x8c22fb30  lw          $v0, -0x4D0($at)
    ctx->pc = 0x1a8830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966064)));
    // 0x1a8834: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a8834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a8838: 0xc31804  sllv        $v1, $v1, $a2
    ctx->pc = 0x1a8838u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
    // 0x1a883c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1a883cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1a8840: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1A8840u;
    {
        const bool branch_taken_0x1a8840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8840u;
        // 0x1a8844: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8840) {
            ctx->pc = 0x1A8894u;
            return;
        }
    }
    ctx->pc = 0x1A8848u;
}
