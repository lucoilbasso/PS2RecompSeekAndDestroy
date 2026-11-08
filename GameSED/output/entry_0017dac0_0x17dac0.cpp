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

// Function: entry_0017dac0
// Address: 0x17dac0 - 0x17dae8
void entry_0017dac0_0x17dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dac0_0x17dac0");
#endif

    ctx->pc = 0x17dac0u;

    // 0x17dac0: 0x25840010  addiu       $a0, $t4, 0x10
    ctx->pc = 0x17dac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), 16));
    // 0x17dac4: 0x95620016  lhu         $v0, 0x16($t3)
    ctx->pc = 0x17dac4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 22)));
    // 0x17dac8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17dac8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dacc: 0xa563000c  sh          $v1, 0xC($t3)
    ctx->pc = 0x17daccu;
    WRITE16(ADD32(GPR_U32(ctx, 11), 12), (uint16_t)GPR_U32(ctx, 3));
    // 0x17dad0: 0xa562000e  sh          $v0, 0xE($t3)
    ctx->pc = 0x17dad0u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x17dad4: 0xa5600008  sh          $zero, 0x8($t3)
    ctx->pc = 0x17dad4u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 8), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dad8: 0xa560000a  sh          $zero, 0xA($t3)
    ctx->pc = 0x17dad8u;
    WRITE16(ADD32(GPR_U32(ctx, 11), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x17dadc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17DADCu;
    {
        const bool branch_taken_0x17dadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17DAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DADCu;
        // 0x17dae0: 0xad6dfff0  sw          $t5, -0x10($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294967280), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17dadc) {
            ctx->pc = 0x17DB00u;
            return;
        }
    }
    ctx->pc = 0x17DAE4u;
    // 0x17dae4: 0x0  nop
    ctx->pc = 0x17dae4u;
    // NOP
    ctx->pc = 0x17dae8u;
}
