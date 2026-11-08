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

// Function: entry_00137430
// Address: 0x137430 - 0x137458
void entry_00137430_0x137430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00137430_0x137430");
#endif

    ctx->pc = 0x137430u;

    // 0x137430: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x137430u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x137434: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x137434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x137438: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x137438u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x13743c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x13743cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x137440: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x137440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x137444: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x137444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x137448: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x137448u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13744c: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x13744Cu;
    {
        const bool branch_taken_0x13744c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13744c) {
            ctx->pc = 0x137450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13744Cu;
            // 0x137450: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137458u;
            return;
        }
    }
    ctx->pc = 0x137454u;
    // 0x137454: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x137454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    ctx->pc = 0x137458u;
}
