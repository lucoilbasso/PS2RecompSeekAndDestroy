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

// Function: entry_00124d5c
// Address: 0x124d5c - 0x124db0
void entry_00124d5c_0x124d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00124d5c_0x124d5c");
#endif

    ctx->pc = 0x124d5cu;

    // 0x124d5c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d60: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x124d60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x124d64: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x124d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d68: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x124d68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x124d6c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d6cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d70: 0xe4560004  swc1        $f22, 0x4($v0)
    ctx->pc = 0x124d70u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x124d74: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x124d74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x124d78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x124d7c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d80: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x124d80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x124d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x124d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x124d88: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x124d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
    // 0x124d8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x124d8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x124d90: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x124d90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x124d94: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x124d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x124d98: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x124d98u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x124d9c: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x124d9cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x124da0: 0xe4770004  swc1        $f23, 0x4($v1)
    ctx->pc = 0x124da0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x124da4: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x124da4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x124da8: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x124DA8u;
    {
        const bool branch_taken_0x124da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x124DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x124DA8u;
        // 0x124dac: 0x7c820000  sq          $v0, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x124da8) {
            ctx->pc = 0x124E60u;
            return;
        }
    }
    ctx->pc = 0x124DB0u;
}
