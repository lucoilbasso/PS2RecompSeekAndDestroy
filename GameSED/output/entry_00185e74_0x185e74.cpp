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

// Function: entry_00185e74
// Address: 0x185e74 - 0x185e98
void entry_00185e74_0x185e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185e74_0x185e74");
#endif

    ctx->pc = 0x185e74u;

    // 0x185e74: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185e78: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185e78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185e7c: 0x24421d98  addiu       $v0, $v0, 0x1D98
    ctx->pc = 0x185e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7576));
    // 0x185e80: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x185e80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x185e84: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x185e84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x185e88: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x185e88u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x185e8c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x185e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x185e90: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x185E90u;
    {
        const bool branch_taken_0x185e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185E90u;
        // 0x185e94: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185e90) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185E98u;
}
