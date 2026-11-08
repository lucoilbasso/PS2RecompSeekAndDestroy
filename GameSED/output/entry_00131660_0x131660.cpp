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

// Function: entry_00131660
// Address: 0x131660 - 0x13168c
void entry_00131660_0x131660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131660_0x131660");
#endif

    ctx->pc = 0x131660u;

    // 0x131660: 0x5445000d  bnel        $v0, $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x131660u;
    {
        const bool branch_taken_0x131660 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x131660) {
            ctx->pc = 0x131664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131660u;
            // 0x131664: 0x8e100054  lw          $s0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131698u;
            return;
        }
    }
    ctx->pc = 0x131668u;
    // 0x131668: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x131668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13166c: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x13166cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x131670: 0xdfa30038  ld          $v1, 0x38($sp)
    ctx->pc = 0x131670u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131674: 0xae0400f0  sw          $a0, 0xF0($s0)
    ctx->pc = 0x131674u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 4));
    // 0x131678: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x131678u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x13167c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x13167cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x131680: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x131680u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x131684: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x131684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x131688: 0xe6010100  swc1        $f1, 0x100($s0)
    ctx->pc = 0x131688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 256), bits); }
    ctx->pc = 0x13168cu;
}
