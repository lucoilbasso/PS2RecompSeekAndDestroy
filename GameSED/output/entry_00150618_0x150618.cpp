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

// Function: entry_00150618
// Address: 0x150618 - 0x150670
void entry_00150618_0x150618(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00150618_0x150618");
#endif

    ctx->pc = 0x150618u;

label_150618:
    // 0x150618: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x150618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15061c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x15061cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x150620: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x150620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x150624: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x150624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x150628: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x150628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x15062c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x15062cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x150630: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x150630u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x150634: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x150634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x150638: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x150638u;
    {
        const bool branch_taken_0x150638 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x15063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150638u;
        // 0x15063c: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150638) {
            ctx->pc = 0x150618u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_150618;
        }
    }
    ctx->pc = 0x150640u;
    // 0x150640: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x150640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x150644: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x150644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x150648: 0x4480c000  mtc1        $zero, $f24
    ctx->pc = 0x150648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x15064c: 0x24569c00  addiu       $s6, $v0, -0x6400
    ctx->pc = 0x15064cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941696));
    // 0x150650: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x150650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x150654: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x150654u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x150658: 0x24749be0  addiu       $s4, $v1, -0x6420
    ctx->pc = 0x150658u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941664));
    // 0x15065c: 0xc7968210  lwc1        $f22, -0x7DF0($gp)
    ctx->pc = 0x15065cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x150660: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x150660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150664: 0x265503b0  addiu       $s5, $s2, 0x3B0
    ctx->pc = 0x150664u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 944));
    // 0x150668: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x150668u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15066c: 0x26500600  addiu       $s0, $s2, 0x600
    ctx->pc = 0x15066cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 1536));
    ctx->pc = 0x150670u;
}
