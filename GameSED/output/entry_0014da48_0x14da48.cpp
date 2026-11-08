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

// Function: entry_0014da48
// Address: 0x14da48 - 0x14da60
void entry_0014da48_0x14da48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014da48_0x14da48");
#endif

    ctx->pc = 0x14da48u;

    // 0x14da48: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14DA48u;
    {
        const bool branch_taken_0x14da48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x14DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14DA48u;
        // 0x14da4c: 0x24020508  addiu       $v0, $zero, 0x508 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14da48) {
            ctx->pc = 0x14DA60u;
            return;
        }
    }
    ctx->pc = 0x14DA50u;
    // 0x14da50: 0x8e220264  lw          $v0, 0x264($s1)
    ctx->pc = 0x14da50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 612)));
    // 0x14da54: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x14da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x14da58: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x14da58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
    // 0x14da5c: 0x24020508  addiu       $v0, $zero, 0x508
    ctx->pc = 0x14da5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1288));
    ctx->pc = 0x14da60u;
}
