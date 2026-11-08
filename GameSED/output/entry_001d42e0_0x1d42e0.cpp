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

// Function: entry_001d42e0
// Address: 0x1d42e0 - 0x1d42f8
void entry_001d42e0_0x1d42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d42e0_0x1d42e0");
#endif

    ctx->pc = 0x1d42e0u;

    // 0x1d42e0: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x1d42e0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1d42e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d42e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d42e8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x1d42e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
    // 0x1d42ec: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1D42ECu;
    {
        const bool branch_taken_0x1d42ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D42F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D42ECu;
        // 0x1d42f0: 0xa623000c  sh          $v1, 0xC($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d42ec) {
            ctx->pc = 0x1D432Cu;
            return;
        }
    }
    ctx->pc = 0x1D42F4u;
    // 0x1d42f4: 0x0  nop
    ctx->pc = 0x1d42f4u;
    // NOP
    ctx->pc = 0x1d42f8u;
}
