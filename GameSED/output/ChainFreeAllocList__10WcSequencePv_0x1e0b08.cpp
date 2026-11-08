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

// Function: ChainFreeAllocList__10WcSequencePv
// Address: 0x1e0b08 - 0x1e0b20
void ChainFreeAllocList__10WcSequencePv_0x1e0b08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ChainFreeAllocList__10WcSequencePv_0x1e0b08");
#endif

    ctx->pc = 0x1e0b08u;

    // 0x1e0b08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e0b0c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x1e0b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x1e0b10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0b10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e0b14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0b14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e0b18: 0x80683b6  j           func_1A0ED8
    ctx->pc = 0x1E0B18u;
    ctx->pc = 0x1E0B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E0B18u;
    // 0x1e0b1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0ED8u;
    BObjListChainObject__FPP8BObjListP5BcObj_0x1a0ed8(rdram, ctx, runtime); return;
    ctx->pc = 0x1E0B20u;
}
