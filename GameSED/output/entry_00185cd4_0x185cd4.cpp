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

// Function: entry_00185cd4
// Address: 0x185cd4 - 0x185cf8
void entry_00185cd4_0x185cd4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185cd4_0x185cd4");
#endif

    ctx->pc = 0x185cd4u;

    // 0x185cd4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185cd8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x185cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
    // 0x185cdc: 0x244244a8  addiu       $v0, $v0, 0x44A8
    ctx->pc = 0x185cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17576));
    // 0x185ce0: 0xaca80014  sw          $t0, 0x14($a1)
    ctx->pc = 0x185ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
    // 0x185ce4: 0x14c0ffc8  bnez        $a2, . + 4 + (-0x38 << 2)
    ctx->pc = 0x185CE4u;
    {
        const bool branch_taken_0x185ce4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x185CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CE4u;
        // 0x185ce8: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185ce4) {
            ctx->pc = 0x185C08u;
            return;
        }
    }
    ctx->pc = 0x185CECu;
    // 0x185cec: 0x100000a8  b           . + 4 + (0xA8 << 2)
    ctx->pc = 0x185CECu;
    {
        const bool branch_taken_0x185cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185CECu;
        // 0x185cf0: 0xa4a00008  sh          $zero, 0x8($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185cec) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185CF4u;
    // 0x185cf4: 0x0  nop
    ctx->pc = 0x185cf4u;
    // NOP
    ctx->pc = 0x185cf8u;
}
