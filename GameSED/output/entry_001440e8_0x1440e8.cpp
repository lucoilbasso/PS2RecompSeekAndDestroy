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

// Function: entry_001440e8
// Address: 0x1440e8 - 0x144108
void entry_001440e8_0x1440e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001440e8_0x1440e8");
#endif

    ctx->pc = 0x1440e8u;

    // 0x1440e8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x1440e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x1440ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1440ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1440f0: 0x24422680  addiu       $v0, $v0, 0x2680
    ctx->pc = 0x1440f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9856));
    // 0x1440f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1440f4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x262680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262680u, _value); } while (0);
    // 0x1440f8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1440f8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262688u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x262688u, _value); } while (0);
    // 0x1440fc: 0xa4400004  sh          $zero, 0x4($v0)
    ctx->pc = 0x1440fcu;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x262684u, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x262684u, _value); } while (0);
    // 0x144100: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x144100u;
    {
        const bool branch_taken_0x144100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144100u;
        // 0x144104: 0xa4400006  sh          $zero, 0x6($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144100) {
            ctx->pc = 0x144160u;
            return;
        }
    }
    ctx->pc = 0x144108u;
}
