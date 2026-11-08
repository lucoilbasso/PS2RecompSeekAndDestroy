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

// Function: entry_0018c164
// Address: 0x18c164 - 0x18c180
void entry_0018c164_0x18c164(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018c164_0x18c164");
#endif

    ctx->pc = 0x18c164u;

    // 0x18c164: 0x96620000  lhu         $v0, 0x0($s3)
    ctx->pc = 0x18c164u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x18c168: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x18c168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18c16c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18c16cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x18c170: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x18c170u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x18c174: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x18C174u;
    {
        const bool branch_taken_0x18c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18C174u;
        // 0x18c178: 0x46010000  add.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18c174) {
            ctx->pc = 0x18C1ECu;
            return;
        }
    }
    ctx->pc = 0x18C17Cu;
    // 0x18c17c: 0x0  nop
    ctx->pc = 0x18c17cu;
    // NOP
    ctx->pc = 0x18c180u;
}
