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

// Function: entry_0012b22c
// Address: 0x12b22c - 0x12b2b4
void entry_0012b22c_0x12b22c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012b22c_0x12b22c");
#endif

    ctx->pc = 0x12b22cu;

    // 0x12b22c: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x12b22cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12b230: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x12B230u;
    {
        const bool branch_taken_0x12b230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B230u;
        // 0x12b234: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b230) {
            ctx->pc = 0x12B1E8u;
            return;
        }
    }
    ctx->pc = 0x12B238u;
    // 0x12b238: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x12B238u;
    {
        const bool branch_taken_0x12b238 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B238u;
        // 0x12b23c: 0x93a300b3  lbu         $v1, 0xB3($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b238) {
            ctx->pc = 0x12B2B4u;
            return;
        }
    }
    ctx->pc = 0x12B240u;
    // 0x12b240: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x12b240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b244: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x12b244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b248: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x12b248u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x12b24c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b24cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b250: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x12b250u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x12b254: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b258: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x12b258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12b25c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12b260: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b260u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b264: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x12b264u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x12b268: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x12b268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12b26c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x12b26cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b270: 0xfc830008  sd          $v1, 0x8($a0)
    ctx->pc = 0x12b270u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 3));
    // 0x12b274: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b278: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x12b278u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x12b27c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x12b27cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b280: 0xe4950004  swc1        $f21, 0x4($a0)
    ctx->pc = 0x12b280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x12b284: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b284u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b288: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12b288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b28c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x12b28cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x12b290: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x12b290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12b294: 0xc6600020  lwc1        $f0, 0x20($s3)
    ctx->pc = 0x12b294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b298: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x12b298u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x12b29c: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x12b29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x12b2a0: 0xe4750008  swc1        $f21, 0x8($v1)
    ctx->pc = 0x12b2a0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x12b2a4: 0xe4740000  swc1        $f20, 0x0($v1)
    ctx->pc = 0x12b2a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x12b2a8: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x12b2a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12b2ac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12b2acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12b2b0: 0x93a300b3  lbu         $v1, 0xB3($sp)
    ctx->pc = 0x12b2b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    ctx->pc = 0x12b2b4u;
}
