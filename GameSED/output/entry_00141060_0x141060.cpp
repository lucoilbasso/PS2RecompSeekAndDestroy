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

// Function: entry_00141060
// Address: 0x141060 - 0x141088
void entry_00141060_0x141060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00141060_0x141060");
#endif

    ctx->pc = 0x141060u;

    // 0x141060: 0x1060003b  beqz        $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x141060u;
    {
        const bool branch_taken_0x141060 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x141064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141060u;
        // 0x141064: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141060) {
            ctx->pc = 0x141150u;
            return;
        }
    }
    ctx->pc = 0x141068u;
    // 0x141068: 0x32820010  andi        $v0, $s4, 0x10
    ctx->pc = 0x141068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)16);
    // 0x14106c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14106Cu;
    {
        const bool branch_taken_0x14106c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x141070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14106Cu;
        // 0x141070: 0x32820040  andi        $v0, $s4, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14106c) {
            ctx->pc = 0x141088u;
            return;
        }
    }
    ctx->pc = 0x141074u;
    // 0x141074: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x141074u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x141078: 0xde030028  ld          $v1, 0x28($s0)
    ctx->pc = 0x141078u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x14107c: 0xfe020040  sd          $v0, 0x40($s0)
    ctx->pc = 0x14107cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 64), GPR_U64(ctx, 2));
    // 0x141080: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x141080u;
    {
        const bool branch_taken_0x141080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x141084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x141080u;
        // 0x141084: 0xfe030048  sd          $v1, 0x48($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141080) {
            ctx->pc = 0x14113Cu;
            return;
        }
    }
    ctx->pc = 0x141088u;
}
