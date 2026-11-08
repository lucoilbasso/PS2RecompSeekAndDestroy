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

// Function: entry_0015aac8
// Address: 0x15aac8 - 0x15ab20
void entry_0015aac8_0x15aac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015aac8_0x15aac8");
#endif

    ctx->pc = 0x15aac8u;

label_15aac8:
    // 0x15aac8: 0xc660017c  lwc1        $f0, 0x17C($s3)
    ctx->pc = 0x15aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15aacc:
    // 0x15aacc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x15aaccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_15aad0:
    // 0x15aad0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x15aad0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_15aad4:
    // 0x15aad4: 0x26680150  addiu       $t0, $s3, 0x150
    ctx->pc = 0x15aad4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 336));
label_15aad8:
    // 0x15aad8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x15aad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_15aadc:
    // 0x15aadc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x15aadcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_15aae0:
    // 0x15aae0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x15aae0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_15aae4:
    // 0x15aae4: 0x9503000e  lhu         $v1, 0xE($t0)
    ctx->pc = 0x15aae4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 14)));
label_15aae8:
    // 0x15aae8: 0xe5020028  swc1        $f2, 0x28($t0)
    ctx->pc = 0x15aae8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 40), bits); }
label_15aaec:
    // 0x15aaec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x15aaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_15aaf0:
    // 0x15aaf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x15aaf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_15aaf4:
    // 0x15aaf4: 0x1064003c  beq         $v1, $a0, . + 4 + (0x3C << 2)
label_15aaf8:
    if (ctx->pc == 0x15AAF8u) {
        ctx->pc = 0x15AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF4u;
        // 0x15aaf8: 0xe501002c  swc1        $f1, 0x2C($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AAFCu;
        goto label_15aafc;
    }
    ctx->pc = 0x15AAF4u;
    {
        const bool branch_taken_0x15aaf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x15AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AAF4u;
        // 0x15aaf8: 0xe501002c  swc1        $f1, 0x2C($t0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15aaf4) {
            ctx->pc = 0x15ABE8u;
            return;
        }
    }
    ctx->pc = 0x15AAFCu;
label_15aafc:
    // 0x15aafc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x15aafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_15ab00:
    // 0x15ab00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_15ab04:
    if (ctx->pc == 0x15AB04u) {
        ctx->pc = 0x15AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB00u;
        // 0x15ab04: 0xa503000e  sh          $v1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15AB08u;
        goto label_15ab08;
    }
    ctx->pc = 0x15AB00u;
    {
        const bool branch_taken_0x15ab00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15AB00u;
        // 0x15ab04: 0xa503000e  sh          $v1, 0xE($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 14), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ab00) {
            ctx->pc = 0x15AB7Cu;
            return;
        }
    }
    ctx->pc = 0x15AB08u;
label_15ab08:
    // 0x15ab08: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x15ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_15ab0c:
    // 0x15ab0c: 0x3c030025  lui         $v1, 0x25
    ctx->pc = 0x15ab0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)37 << 16));
label_15ab10:
    // 0x15ab10: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15ab10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_15ab14:
    // 0x15ab14: 0x8c636e60  lw          $v1, 0x6E60($v1)
    ctx->pc = 0x15ab14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28256)));
label_15ab18:
    // 0x15ab18: 0x600008  jr          $v1
label_15ab1c:
    if (ctx->pc == 0x15AB1Cu) {
        ctx->pc = 0x15AB20u;
        goto label_fallthrough_0x15ab18;
    }
    ctx->pc = 0x15AB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15AB18u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
label_fallthrough_0x15ab18:
    ctx->pc = 0x15AB20u;
}
