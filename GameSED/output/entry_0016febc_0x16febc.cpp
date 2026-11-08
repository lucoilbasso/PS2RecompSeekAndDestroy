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

// Function: entry_0016febc
// Address: 0x16febc - 0x16fedc
void entry_0016febc_0x16febc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016febc_0x16febc");
#endif

    ctx->pc = 0x16febcu;

    // 0x16febc: 0x3c0500b6  lui         $a1, 0xB6
    ctx->pc = 0x16febcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)182 << 16));
    // 0x16fec0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fec4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x16fec4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fec8: 0x34a5c700  ori         $a1, $a1, 0xC700
    ctx->pc = 0x16fec8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50944);
    // 0x16fecc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x16feccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x16fed0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x16FED0u;
    {
        const bool branch_taken_0x16fed0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16FED0u;
        // 0x16fed4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fed0) {
            ctx->pc = 0x16FEDCu;
            return;
        }
    }
    ctx->pc = 0x16FED8u;
    // 0x16fed8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->pc = 0x16fedcu;
}
