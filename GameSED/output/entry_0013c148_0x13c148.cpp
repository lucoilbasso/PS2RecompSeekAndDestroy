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

// Function: entry_0013c148
// Address: 0x13c148 - 0x13c180
void entry_0013c148_0x13c148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013c148_0x13c148");
#endif

    ctx->pc = 0x13c148u;

    // 0x13c148: 0x5240000d  beql        $s2, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x13C148u;
    {
        const bool branch_taken_0x13c148 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c148) {
            ctx->pc = 0x13C14Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13C148u;
            // 0x13c14c: 0x90e20020  lbu         $v0, 0x20($a3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13C180u;
            return;
        }
    }
    ctx->pc = 0x13C150u;
    // 0x13c150: 0x24e20030  addiu       $v0, $a3, 0x30
    ctx->pc = 0x13c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x13c154: 0xda440000  lqc2        $vf4, 0x0($s2)
    ctx->pc = 0x13c154u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13c158: 0xda450010  lqc2        $vf5, 0x10($s2)
    ctx->pc = 0x13c158u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x13c15c: 0xda460020  lqc2        $vf6, 0x20($s2)
    ctx->pc = 0x13c15cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x13c160: 0xda470030  lqc2        $vf7, 0x30($s2)
    ctx->pc = 0x13c160u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x13c164: 0xf8440000  sqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13c164u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13c168: 0xf8450010  sqc2        $vf5, 0x10($v0)
    ctx->pc = 0x13c168u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x13c16c: 0xf8460020  sqc2        $vf6, 0x20($v0)
    ctx->pc = 0x13c16cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), _mm_castps_si128(ctx->vu0_vf[6]));
    // 0x13c170: 0xf8470030  sqc2        $vf7, 0x30($v0)
    ctx->pc = 0x13c170u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x13c174: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13C174u;
    {
        const bool branch_taken_0x13c174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C174u;
        // 0x13c178: 0xe4e10098  swc1        $f1, 0x98($a3) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 152), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c174) {
            ctx->pc = 0x13C18Cu;
            return;
        }
    }
    ctx->pc = 0x13C17Cu;
    // 0x13c17c: 0x0  nop
    ctx->pc = 0x13c17cu;
    // NOP
    ctx->pc = 0x13c180u;
}
