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

// Function: entry_00139218
// Address: 0x139218 - 0x139274
void entry_00139218_0x139218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00139218_0x139218");
#endif

    switch (ctx->pc) {
        case 0x139238u: goto label_139238;
        case 0x139270u: goto label_139270;
        default: break;
    }

    ctx->pc = 0x139218u;

    // 0x139218: 0xe7b60050  swc1        $f22, 0x50($sp)
    ctx->pc = 0x139218u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x13921c: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x13921cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x139220: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x139220u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x139224: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x139224u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x139228: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x139228u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x13922c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x13922cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x139230: 0xc04dbd2  jal         func_136F48
    ctx->pc = 0x139230u;
    SET_GPR_U32(ctx, 31, 0x139238u);
    ctx->pc = 0x139234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139230u;
    // 0x139234: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x136F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136F48u, 0x139230u, 0x139238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139238u;
label_139238:
    // 0x139238: 0x3c050014  lui         $a1, 0x14
    ctx->pc = 0x139238u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)20 << 16));
    // 0x13923c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13923cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139240: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x139240u;
    {
        const bool branch_taken_0x139240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x139240u;
        // 0x139244: 0x24a58f98  addiu       $a1, $a1, -0x7068 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139240) {
            ctx->pc = 0x139274u;
            return;
        }
    }
    ctx->pc = 0x139248u;
    // 0x139248: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x139248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13924c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13924cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139250: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139250u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139254: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x139254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139258: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x139258u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x13925c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x13925cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x139260: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x139260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x139264: 0xe7b5000c  swc1        $f21, 0xC($sp)
    ctx->pc = 0x139264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x139268: 0xc04dea6  jal         func_137A98
    ctx->pc = 0x139268u;
    SET_GPR_U32(ctx, 31, 0x139270u);
    ctx->pc = 0x13926Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x139268u;
    // 0x13926c: 0xe7b60010  swc1        $f22, 0x10($sp) (Delay Slot)
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x137A98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x137A98u, 0x139268u, 0x139270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x139270u;
label_139270:
    // 0x139270: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x139270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x139274u;
}
