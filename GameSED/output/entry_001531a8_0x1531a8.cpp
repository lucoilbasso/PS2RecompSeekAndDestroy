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

// Function: entry_001531a8
// Address: 0x1531a8 - 0x1531c0
void entry_001531a8_0x1531a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001531a8_0x1531a8");
#endif

    ctx->pc = 0x1531a8u;

    // 0x1531a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1531a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1531ac: 0xe6200380  swc1        $f0, 0x380($s1)
    ctx->pc = 0x1531acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 896), bits); }
    // 0x1531b0: 0x8e220184  lw          $v0, 0x184($s1)
    ctx->pc = 0x1531b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x1531b4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1531b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1531b8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1531B8u;
    {
        const bool branch_taken_0x1531b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1531b8) {
            ctx->pc = 0x1531BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1531B8u;
            // 0x1531bc: 0xae200380  sw          $zero, 0x380($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 896), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1531C0u;
            return;
        }
    }
    ctx->pc = 0x1531C0u;
}
