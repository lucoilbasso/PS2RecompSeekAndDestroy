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

// Function: entry_00185efc
// Address: 0x185efc - 0x185f20
void entry_00185efc_0x185efc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185efc_0x185efc");
#endif

    ctx->pc = 0x185efcu;

    // 0x185efc: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x185efcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x185f00: 0xaca70014  sw          $a3, 0x14($a1)
    ctx->pc = 0x185f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 7));
    // 0x185f04: 0x24421d98  addiu       $v0, $v0, 0x1D98
    ctx->pc = 0x185f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7576));
    // 0x185f08: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x185f08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
    // 0x185f0c: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x185f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
    // 0x185f10: 0x9482000a  lhu         $v0, 0xA($a0)
    ctx->pc = 0x185f10u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 10)));
    // 0x185f14: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x185f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x185f18: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x185F18u;
    {
        const bool branch_taken_0x185f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185F18u;
        // 0x185f1c: 0xa482000a  sh          $v0, 0xA($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185f18) {
            ctx->pc = 0x185F90u;
            return;
        }
    }
    ctx->pc = 0x185F20u;
}
