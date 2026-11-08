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

// Function: entry_00167e74
// Address: 0x167e74 - 0x167eb8
void entry_00167e74_0x167e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00167e74_0x167e74");
#endif

    ctx->pc = 0x167e74u;

    // 0x167e74: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x167e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x167e78: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x167e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x167e7c: 0xae670010  sw          $a3, 0x10($s3)
    ctx->pc = 0x167e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 7));
    // 0x167e80: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x167e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x167e84: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x167e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x167e88: 0xc79483f8  lwc1        $f20, -0x7C08($gp)
    ctx->pc = 0x167e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x167e8c: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x167e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x167e90: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x167e90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x167e94: 0xafb601f0  sw          $s6, 0x1F0($sp)
    ctx->pc = 0x167e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 22));
    // 0x167e98: 0x62a021  addu        $s4, $v1, $v0
    ctx->pc = 0x167e98u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167e9c: 0xafb301f4  sw          $s3, 0x1F4($sp)
    ctx->pc = 0x167e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 19));
    // 0x167ea0: 0x24710090  addiu       $s1, $v1, 0x90
    ctx->pc = 0x167ea0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 144));
    // 0x167ea4: 0x1880007d  blez        $a0, . + 4 + (0x7D << 2)
    ctx->pc = 0x167EA4u;
    {
        const bool branch_taken_0x167ea4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x167EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EA4u;
        // 0x167ea8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ea4) {
            ctx->pc = 0x16809Cu;
            return;
        }
    }
    ctx->pc = 0x167EACu;
    // 0x167eac: 0xc79583fc  lwc1        $f21, -0x7C04($gp)
    ctx->pc = 0x167eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x167eb0: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167eb4: 0x27b60080  addiu       $s6, $sp, 0x80
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->pc = 0x167eb8u;
}
