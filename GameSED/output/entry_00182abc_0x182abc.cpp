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

// Function: entry_00182abc
// Address: 0x182abc - 0x182ad0
void entry_00182abc_0x182abc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182abc_0x182abc");
#endif

    ctx->pc = 0x182abcu;

    // 0x182abc: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x182abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ac0: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x182ac0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x182ac4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x182ac4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x182ac8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x182AC8u;
    {
        const bool branch_taken_0x182ac8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x182ac8) {
            ctx->pc = 0x182ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x182AC8u;
            // 0x182acc: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x182AD0u;
            return;
        }
    }
    ctx->pc = 0x182AD0u;
}
