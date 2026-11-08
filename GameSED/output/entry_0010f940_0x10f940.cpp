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

// Function: entry_0010f940
// Address: 0x10f940 - 0x10f958
void entry_0010f940_0x10f940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f940_0x10f940");
#endif

    ctx->pc = 0x10f940u;

    // 0x10f940: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F940u;
    {
        const bool branch_taken_0x10f940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F940u;
        // 0x10f944: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f940) {
            ctx->pc = 0x10F958u;
            return;
        }
    }
    ctx->pc = 0x10F948u;
    // 0x10f948: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x10f948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x10f94c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F94Cu;
    {
        const bool branch_taken_0x10f94c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F94Cu;
        // 0x10f950: 0x244300d0  addiu       $v1, $v0, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f94c) {
            ctx->pc = 0x10F95Cu;
            return;
        }
    }
    ctx->pc = 0x10F954u;
    // 0x10f954: 0x0  nop
    ctx->pc = 0x10f954u;
    // NOP
    ctx->pc = 0x10f958u;
}
