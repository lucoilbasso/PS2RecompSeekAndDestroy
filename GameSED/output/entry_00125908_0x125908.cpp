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

// Function: entry_00125908
// Address: 0x125908 - 0x125978
void entry_00125908_0x125908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00125908_0x125908");
#endif

    ctx->pc = 0x125908u;

label_125908:
    // 0x125908: 0x30a37fff  andi        $v1, $a1, 0x7FFF
    ctx->pc = 0x125908u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)32767);
    // 0x12590c: 0x24a22000  addiu       $v0, $a1, 0x2000
    ctx->pc = 0x12590cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 8192));
    // 0x125910: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x125910u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x125914: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x125914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x125918: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x125918u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12591c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x12591cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x125920: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x125920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x125924: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x125924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x125928: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x125928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12592c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x12592cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x125930: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x125930u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x125934: 0xe4830004  swc1        $f3, 0x4($a0)
    ctx->pc = 0x125934u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x125938: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x125938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x12593c: 0xe484000c  swc1        $f4, 0xC($a0)
    ctx->pc = 0x12593cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x125940: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x125944: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x125944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x125948: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x125948u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x12594c: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x12594cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x125950: 0x621ffed  bgez        $s1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x125950u;
    {
        const bool branch_taken_0x125950 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x125954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125950u;
        // 0x125954: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125950) {
            ctx->pc = 0x125908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_125908;
        }
    }
    ctx->pc = 0x125958u;
    // 0x125958: 0x3c014196  lui         $at, 0x4196
    ctx->pc = 0x125958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16790 << 16));
    // 0x12595c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x12595cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x125960: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x125960u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125964: 0x3c014296  lui         $at, 0x4296
    ctx->pc = 0x125964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17046 << 16));
    // 0x125968: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x125968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12596c: 0xc79680e4  lwc1        $f22, -0x7F1C($gp)
    ctx->pc = 0x12596cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x125970: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x125970u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x125974: 0x2412000a  addiu       $s2, $zero, 0xA
    ctx->pc = 0x125974u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->pc = 0x125978u;
}
