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

// Function: entry_001856b0
// Address: 0x1856b0 - 0x1856e0
void entry_001856b0_0x1856b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001856b0_0x1856b0");
#endif

    ctx->pc = 0x1856b0u;

    // 0x1856b0: 0x8e33000c  lw          $s3, 0xC($s1)
    ctx->pc = 0x1856b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1856b4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x1856b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1856b8: 0x30620400  andi        $v0, $v1, 0x400
    ctx->pc = 0x1856b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
    // 0x1856bc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1856BCu;
    {
        const bool branch_taken_0x1856bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1856C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856BCu;
        // 0x1856c0: 0x8e340008  lw          $s4, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856bc) {
            ctx->pc = 0x18572Cu;
            return;
        }
    }
    ctx->pc = 0x1856C4u;
    // 0x1856c4: 0x12c00006  beqz        $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1856C4u;
    {
        const bool branch_taken_0x1856c4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856C4u;
        // 0x1856c8: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856c4) {
            ctx->pc = 0x1856E0u;
            return;
        }
    }
    ctx->pc = 0x1856CCu;
    // 0x1856cc: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x1856CCu;
    {
        const bool branch_taken_0x1856cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1856cc) {
            ctx->pc = 0x185898u;
            return;
        }
    }
    ctx->pc = 0x1856D4u;
    // 0x1856d4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1856D4u;
    {
        const bool branch_taken_0x1856d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1856D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1856D4u;
        // 0x1856d8: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1856d4) {
            ctx->pc = 0x185730u;
            return;
        }
    }
    ctx->pc = 0x1856DCu;
    // 0x1856dc: 0x0  nop
    ctx->pc = 0x1856dcu;
    // NOP
    ctx->pc = 0x1856e0u;
}
