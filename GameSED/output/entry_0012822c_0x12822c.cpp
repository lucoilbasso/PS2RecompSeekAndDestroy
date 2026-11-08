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

// Function: entry_0012822c
// Address: 0x12822c - 0x1282d4
void entry_0012822c_0x12822c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012822c_0x12822c");
#endif

    ctx->pc = 0x12822cu;

    // 0x12822c: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x12822cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
    // 0x128230: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x128230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
    // 0x128234: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x128234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
    // 0x128238: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x128238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
    // 0x12823c: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x12823cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
    // 0x128240: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x128240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
    // 0x128244: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x128244u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x128248: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x128248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
    // 0x12824c: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x12824cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x128250: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x128250u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x128254: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x128254u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x128258: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x128258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x12825c: 0x8ef30048  lw          $s3, 0x48($s7)
    ctx->pc = 0x12825cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
    // 0x128260: 0x526001da  beql        $s3, $zero, . + 4 + (0x1DA << 2)
    ctx->pc = 0x128260u;
    {
        const bool branch_taken_0x128260 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x128260) {
            ctx->pc = 0x128264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128260u;
            // 0x128264: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1289CCu;
            return;
        }
    }
    ctx->pc = 0x128268u;
    // 0x128268: 0x122001d7  beqz        $s1, . + 4 + (0x1D7 << 2)
    ctx->pc = 0x128268u;
    {
        const bool branch_taken_0x128268 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x12826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128268u;
        // 0x12826c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x128268) {
            ctx->pc = 0x1289C8u;
            return;
        }
    }
    ctx->pc = 0x128270u;
    // 0x128270: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x128270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x128274: 0x546201d5  bnel        $v1, $v0, . + 4 + (0x1D5 << 2)
    ctx->pc = 0x128274u;
    {
        const bool branch_taken_0x128274 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x128274) {
            ctx->pc = 0x128278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x128274u;
            // 0x128278: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1289CCu;
            return;
        }
    }
    ctx->pc = 0x12827Cu;
    // 0x12827c: 0xc6f70000  lwc1        $f23, 0x0($s7)
    ctx->pc = 0x12827cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x128280: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x128280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x128284: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x128284u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
    // 0x128288: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x128288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x12828c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x12828cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x128290: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x128290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x128294: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x128294u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x128298: 0x27a20060  addiu       $v0, $sp, 0x60
    ctx->pc = 0x128298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12829c: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x12829cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282a0: 0x27a20070  addiu       $v0, $sp, 0x70
    ctx->pc = 0x1282a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1282a4: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1282a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282a8: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1282a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1282ac: 0xf8400000  sqc2        $vf0, 0x0($v0)
    ctx->pc = 0x1282acu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282b0: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x1282b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1282b4: 0xf8600000  sqc2        $vf0, 0x0($v1)
    ctx->pc = 0x1282b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[0]));
    // 0x1282b8: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x1282b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x1282bc: 0x86e30006  lh          $v1, 0x6($s7)
    ctx->pc = 0x1282bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 6)));
    // 0x1282c0: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1282C0u;
    {
        const bool branch_taken_0x1282c0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1282C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1282C0u;
        // 0x1282c4: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1282c0) {
            ctx->pc = 0x1282E0u;
            return;
        }
    }
    ctx->pc = 0x1282C8u;
    // 0x1282c8: 0x93a200b3  lbu         $v0, 0xB3($sp)
    ctx->pc = 0x1282c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 179)));
    // 0x1282cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1282CCu;
    {
        const bool branch_taken_0x1282cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1282cc) {
            ctx->pc = 0x1282D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1282CCu;
            // 0x1282d0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1282D4u;
            return;
        }
    }
    ctx->pc = 0x1282D4u;
}
