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

// Function: entry_001081ec
// Address: 0x1081ec - 0x108210
void entry_001081ec_0x1081ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001081ec_0x1081ec");
#endif

    ctx->pc = 0x1081ecu;

    // 0x1081ec: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1081ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1081f0: 0xac87000c  sw          $a3, 0xC($a0)
    ctx->pc = 0x1081f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 7));
    // 0x1081f4: 0x244244a8  addiu       $v0, $v0, 0x44A8
    ctx->pc = 0x1081f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17576));
    // 0x1081f8: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1081f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1081fc: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1081FCu;
    {
        const bool branch_taken_0x1081fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x108200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1081FCu;
        // 0x108200: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1081fc) {
            ctx->pc = 0x108210u;
            return;
        }
    }
    ctx->pc = 0x108204u;
    // 0x108204: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x108204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x108208: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x108208u;
    {
        const bool branch_taken_0x108208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108208u;
        // 0x10820c: 0xa4820008  sh          $v0, 0x8($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108208) {
            ctx->pc = 0x1084F8u;
            return;
        }
    }
    ctx->pc = 0x108210u;
}
