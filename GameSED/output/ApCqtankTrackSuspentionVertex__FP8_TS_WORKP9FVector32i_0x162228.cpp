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

// Function: ApCqtankTrackSuspentionVertex__FP8_TS_WORKP9FVector32i
// Address: 0x162228 - 0x162620
void ApCqtankTrackSuspentionVertex__FP8_TS_WORKP9FVector32i_0x162228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ApCqtankTrackSuspentionVertex__FP8_TS_WORKP9FVector32i_0x162228");
#endif

    switch (ctx->pc) {
        case 0x1622b8u: goto label_1622b8;
        case 0x162568u: goto label_162568;
        default: break;
    }

    ctx->pc = 0x162228u;

    // 0x162228: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x162228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x16222c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x16222cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162230: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x162230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x162234: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x162234u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162238: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x162238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x16223c: 0x261100a0  addiu       $s1, $s0, 0xA0
    ctx->pc = 0x16223cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 160));
    // 0x162240: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x162240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x162244: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x162244u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162248: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x162248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x16224c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x16224cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x162250: 0xffb50088  sd          $s5, 0x88($sp)
    ctx->pc = 0x162250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 21));
    // 0x162254: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x162254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
    // 0x162258: 0xffb70098  sd          $s7, 0x98($sp)
    ctx->pc = 0x162258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 23));
    // 0x16225c: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x16225cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x162260: 0xffbf00a8  sd          $ra, 0xA8($sp)
    ctx->pc = 0x162260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 31));
    // 0x162264: 0xe7b600c0  swc1        $f22, 0xC0($sp)
    ctx->pc = 0x162264u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x162268: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x162268u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x16226c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x16226cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x162270: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x162270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x162274: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x162274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
    // 0x162278: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x162278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16227c: 0x8e130090  lw          $s3, 0x90($s0)
    ctx->pc = 0x16227cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
    // 0x162280: 0x184000d8  blez        $v0, . + 4 + (0xD8 << 2)
    ctx->pc = 0x162280u;
    {
        const bool branch_taken_0x162280 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x162284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162280u;
        // 0x162284: 0x8e120084  lw          $s2, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162280) {
            ctx->pc = 0x1625E4u;
            goto label_1625e4;
        }
    }
    ctx->pc = 0x162288u;
    // 0x162288: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16228c: 0x26170050  addiu       $s7, $s0, 0x50
    ctx->pc = 0x16228cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
    // 0x162290: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x162290u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x162294: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x162294u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x162298: 0x26160060  addiu       $s6, $s0, 0x60
    ctx->pc = 0x162298u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x16229c: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x16229cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1622a0: 0xc7958344  lwc1        $f21, -0x7CBC($gp)
    ctx->pc = 0x1622a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1622a4: 0x2481021  addu        $v0, $s2, $t0
    ctx->pc = 0x1622a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 8)));
    // 0x1622a8: 0x251e0020  addiu       $fp, $t0, 0x20
    ctx->pc = 0x1622a8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
    // 0x1622ac: 0x24550028  addiu       $s5, $v0, 0x28
    ctx->pc = 0x1622acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x1622b0: 0x26070070  addiu       $a3, $s0, 0x70
    ctx->pc = 0x1622b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x1622b4: 0x26540008  addiu       $s4, $s2, 0x8
    ctx->pc = 0x1622b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1622b8:
    // 0x1622b8: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x1622b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1622bc: 0x7e220000  sq          $v0, 0x0($s1)
    ctx->pc = 0x1622bcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), GPR_VEC(ctx, 2));
    // 0x1622c0: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x1622c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x1622c4: 0x26630010  addiu       $v1, $s3, 0x10
    ctx->pc = 0x1622c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1622c8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1622c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1622cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1622ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1622d0: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x1622d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x1622d4: 0x26630020  addiu       $v1, $s3, 0x20
    ctx->pc = 0x1622d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1622d8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1622d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1622dc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x1622dcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x1622e0: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x1622e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1622e4: 0x26630030  addiu       $v1, $s3, 0x30
    ctx->pc = 0x1622e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x1622e8: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1622e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1622ec: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x1622ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x1622f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1622f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1622f4: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x1622f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1622f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1622f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1622fc: 0x10620032  beq         $v1, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1622FCu;
    {
        const bool branch_taken_0x1622fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1622FCu;
        // 0x162300: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1622fc) {
            ctx->pc = 0x1623C8u;
            goto label_1623c8;
        }
    }
    ctx->pc = 0x162304u;
    // 0x162304: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x162304u;
    {
        const bool branch_taken_0x162304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162304) {
            ctx->pc = 0x162308u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162304u;
            // 0x162308: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x162320u;
            goto label_162320;
        }
    }
    ctx->pc = 0x16230Cu;
    // 0x16230c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x16230Cu;
    {
        const bool branch_taken_0x16230c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16230c) {
            ctx->pc = 0x162338u;
            goto label_162338;
        }
    }
    ctx->pc = 0x162314u;
    // 0x162314: 0x10000099  b           . + 4 + (0x99 << 2)
    ctx->pc = 0x162314u;
    {
        const bool branch_taken_0x162314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162314) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x16231Cu;
    // 0x16231c: 0x0  nop
    ctx->pc = 0x16231cu;
    // NOP
label_162320:
    // 0x162320: 0x10620041  beq         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x162320u;
    {
        const bool branch_taken_0x162320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x162324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162320u;
        // 0x162324: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162320) {
            ctx->pc = 0x162428u;
            goto label_162428;
        }
    }
    ctx->pc = 0x162328u;
    // 0x162328: 0x1062007d  beq         $v1, $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x162328u;
    {
        const bool branch_taken_0x162328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x16232Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162328u;
        // 0x16232c: 0x25040030  addiu       $a0, $t0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162328) {
            ctx->pc = 0x162520u;
            goto label_162520;
        }
    }
    ctx->pc = 0x162330u;
    // 0x162330: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x162330u;
    {
        const bool branch_taken_0x162330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162330) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x162338u;
label_162338:
    // 0x162338: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x162338u;
    {
        const bool branch_taken_0x162338 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16233Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162338u;
        // 0x16233c: 0x2644ffc0  addiu       $a0, $s2, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162338) {
            ctx->pc = 0x162354u;
            goto label_162354;
        }
    }
    ctx->pc = 0x162340u;
    // 0x162340: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x162340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x162344: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x162344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x162348: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x162348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x16234c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16234cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x162350: 0x2464ffc0  addiu       $a0, $v1, -0x40
    ctx->pc = 0x162350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_162354:
    // 0x162354: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x162354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x162358: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x162358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16235c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x16235cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x162360: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x162360u;
    {
        const bool branch_taken_0x162360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x162364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162360u;
        // 0x162364: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162360) {
            ctx->pc = 0x16236Cu;
            goto label_16236c;
        }
    }
    ctx->pc = 0x162368u;
    // 0x162368: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x162368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_16236c:
    // 0x16236c: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x16236cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x162370: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x162370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x162374: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x162374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162378: 0xc4620008  lwc1        $f2, 0x8($v1)
    ctx->pc = 0x162378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16237c: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x16237cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162380: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x162380u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x162384: 0xc7808348  lwc1        $f0, -0x7CB8($gp)
    ctx->pc = 0x162384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162388: 0x46160d02  mul.s       $f20, $f1, $f22
    ctx->pc = 0x162388u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x16238c: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x16238cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162390: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162390u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162394: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x162394u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162398: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x162398u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16239c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16239cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1623a0: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1623a0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1623a4: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x1623a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x1623a8: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x1623a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x1623ac: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x1623acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x1623b0: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x1623b0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x1623b4: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x1623b4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x1623b8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1623b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1623bc: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x1623BCu;
    {
        const bool branch_taken_0x1623bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1623bc) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x1623C4u;
    // 0x1623c4: 0x0  nop
    ctx->pc = 0x1623c4u;
    // NOP
label_1623c8:
    // 0x1623c8: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x1623c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1623cc: 0xd9430000  lqc2        $vf3, 0x0($t2)
    ctx->pc = 0x1623ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x1623d0: 0x4bc310a8  vadd.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1623d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1623d4: 0xfae20000  sqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1623d4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1623d8: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x1623d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1623dc: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x1623dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1623e0: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x1623e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1623e4: 0x4bc310ac  vsub.xyz    $vf2, $vf2, $vf3
    ctx->pc = 0x1623e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1623e8: 0xfac20000  sqc2        $vf2, 0x0($s6)
    ctx->pc = 0x1623e8u;
    WRITE128(ADD32(GPR_U32(ctx, 22), 0), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1623ec: 0xdac80000  lqc2        $vf8, 0x0($s6)
    ctx->pc = 0x1623ecu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1623f0: 0xd9240000  lqc2        $vf4, 0x0($t1)
    ctx->pc = 0x1623f0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1623f4: 0xd9250010  lqc2        $vf5, 0x10($t1)
    ctx->pc = 0x1623f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x1623f8: 0xd9260020  lqc2        $vf6, 0x20($t1)
    ctx->pc = 0x1623f8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x1623fc: 0xd9270030  lqc2        $vf7, 0x30($t1)
    ctx->pc = 0x1623fcu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 48)));
    // 0x162400: 0x4be821bc  vmulax.xyzw $ACC, $vf4, $vf8x
    ctx->pc = 0x162400u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x162404: 0x4be828bd  vmadday.xyzw $ACC, $vf5, $vf8y
    ctx->pc = 0x162404u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x162408: 0x4be830be  vmaddaz.xyzw $ACC, $vf6, $vf8z
    ctx->pc = 0x162408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x16240c: 0x4be83b0b  vmaddw.xyzw $vf12, $vf7, $vf8w
    ctx->pc = 0x16240cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x162410: 0xf8ec0000  sqc2        $vf12, 0x0($a3)
    ctx->pc = 0x162410u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x162414: 0xc6010074  lwc1        $f1, 0x74($s0)
    ctx->pc = 0x162414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162418: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x162418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16241c: 0x10000057  b           . + 4 + (0x57 << 2)
    ctx->pc = 0x16241Cu;
    {
        const bool branch_taken_0x16241c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x162420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16241Cu;
        // 0x162420: 0x46000d01  sub.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16241c) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x162424u;
    // 0x162424: 0x0  nop
    ctx->pc = 0x162424u;
    // NOP
label_162428:
    // 0x162428: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x162428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16242c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16242cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x162430: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x162430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x162434: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x162434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x162438: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x162438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16243c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16243Cu;
    {
        const bool branch_taken_0x16243c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x162440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16243Cu;
        // 0x162440: 0x741821  addu        $v1, $v1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16243c) {
            ctx->pc = 0x162498u;
            goto label_162498;
        }
    }
    ctx->pc = 0x162444u;
    // 0x162444: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x162444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162448: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x162448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x16244c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x16244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162450: 0xc48000d4  lwc1        $f0, 0xD4($a0)
    ctx->pc = 0x162450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162454: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x162454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162458: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x162458u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x16245c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16245cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162460: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x162460u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162464: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x162464u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162468: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x162468u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x16246c: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x16246cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x162470: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x162470u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162474: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x162474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x162478: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x162478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x16247c: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x16247cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x162480: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x162480u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x162484: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x162484u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x162488: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x162488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x16248c: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x16248Cu;
    {
        const bool branch_taken_0x16248c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16248c) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x162494u;
    // 0x162494: 0x0  nop
    ctx->pc = 0x162494u;
    // NOP
label_162498:
    // 0x162498: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x162498u;
    {
        const bool branch_taken_0x162498 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x16249Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162498u;
        // 0x16249c: 0x2644ffc0  addiu       $a0, $s2, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162498) {
            ctx->pc = 0x1624B4u;
            goto label_1624b4;
        }
    }
    ctx->pc = 0x1624A0u;
    // 0x1624a0: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1624a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1624a4: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1624a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x1624a8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1624a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x1624ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1624acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1624b0: 0x2464ffc0  addiu       $a0, $v1, -0x40
    ctx->pc = 0x1624b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1624b4:
    // 0x1624b4: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1624b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1624b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1624b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1624bc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1624bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1624c0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1624C0u;
    {
        const bool branch_taken_0x1624c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1624C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1624C0u;
        // 0x1624c4: 0x26430040  addiu       $v1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1624c0) {
            ctx->pc = 0x1624CCu;
            goto label_1624cc;
        }
    }
    ctx->pc = 0x1624C8u;
    // 0x1624c8: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x1624c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1624cc:
    // 0x1624cc: 0x9e1021  addu        $v0, $a0, $fp
    ctx->pc = 0x1624ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 30)));
    // 0x1624d0: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x1624d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
    // 0x1624d4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1624d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1624d8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1624d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1624dc: 0xc6a20000  lwc1        $f2, 0x0($s5)
    ctx->pc = 0x1624dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1624e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1624e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1624e4: 0x46160502  mul.s       $f20, $f0, $f22
    ctx->pc = 0x1624e4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1624e8: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x1624e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1624ec: 0x48a22000  qmtc2.ni    $v0, $vf4
    ctx->pc = 0x1624ecu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1624f0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x1624f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1624f4: 0x48a22800  qmtc2.ni    $v0, $vf5
    ctx->pc = 0x1624f4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1624f8: 0x4402a800  mfc1        $v0, $f21
    ctx->pc = 0x1624f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[21], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1624fc: 0x48a23000  qmtc2.ni    $v0, $vf6
    ctx->pc = 0x1624fcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x162500: 0x4b0001c3  vaddw.x     $vf7, $vf0, $vf0w
    ctx->pc = 0x162500u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x162504: 0x4b063a2c  vsub.x      $vf8, $vf7, $vf6
    ctx->pc = 0x162504u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[6]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x162508: 0x4b0621bc  vmulax.x    $ACC, $vf4, $vf6x
    ctx->pc = 0x162508u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x16250c: 0x4b082b08  vmaddx.x    $vf12, $vf5, $vf8x
    ctx->pc = 0x16250cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x162510: 0x48226000  qmfc2.ni    $v0, $vf12
    ctx->pc = 0x162510u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x162514: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x162514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x162518: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x162518u;
    {
        const bool branch_taken_0x162518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x162518) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x162520u;
label_162520:
    // 0x162520: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x162520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162524: 0x2441021  addu        $v0, $s2, $a0
    ctx->pc = 0x162524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x162528: 0xc781834c  lwc1        $f1, -0x7CB4($gp)
    ctx->pc = 0x162528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16252c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16252cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x162530: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x162530u;
    {
        const bool branch_taken_0x162530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x162534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162530u;
        // 0x162534: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x162530) {
            ctx->pc = 0x16257Cu;
            goto label_16257c;
        }
    }
    ctx->pc = 0x162538u;
    // 0x162538: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x162538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x16253c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16253cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x162540: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x162540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x162544: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x162544u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162548: 0x7fa60010  sq          $a2, 0x10($sp)
    ctx->pc = 0x162548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 6));
    // 0x16254c: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x16254cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x162550: 0x7fa70020  sq          $a3, 0x20($sp)
    ctx->pc = 0x162550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 7));
    // 0x162554: 0x7fa80030  sq          $t0, 0x30($sp)
    ctx->pc = 0x162554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 8));
    // 0x162558: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x162558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x16255c: 0x7faa0050  sq          $t2, 0x50($sp)
    ctx->pc = 0x16255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 10));
    // 0x162560: 0xc0618bc  jal         func_1862F0
    ctx->pc = 0x162560u;
    SET_GPR_U32(ctx, 31, 0x162568u);
    ctx->pc = 0x162564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x162560u;
    // 0x162564: 0xe46000d4  swc1        $f0, 0xD4($v1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1862F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1862F0u, 0x162560u, 0x162568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x162568u;
label_162568:
    // 0x162568: 0x7baa0050  lq          $t2, 0x50($sp)
    ctx->pc = 0x162568u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16256c: 0x7ba90040  lq          $t1, 0x40($sp)
    ctx->pc = 0x16256cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x162570: 0x7ba80030  lq          $t0, 0x30($sp)
    ctx->pc = 0x162570u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x162574: 0x7ba70020  lq          $a3, 0x20($sp)
    ctx->pc = 0x162574u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x162578: 0x7ba60010  lq          $a2, 0x10($sp)
    ctx->pc = 0x162578u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_16257c:
    // 0x16257c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16257cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x162580: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x162580u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x162584: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x162584u;
    {
        const bool branch_taken_0x162584 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x162584) {
            ctx->pc = 0x162588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x162584u;
            // 0x162588: 0x8e020080  lw          $v0, 0x80($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1625C0u;
            goto label_1625c0;
        }
    }
    ctx->pc = 0x16258Cu;
    // 0x16258c: 0xc6210004  lwc1        $f1, 0x4($s1)
    ctx->pc = 0x16258cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x162590: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x162590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x162594: 0xc6230024  lwc1        $f3, 0x24($s1)
    ctx->pc = 0x162594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x162598: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x162598u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x16259c: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x16259cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1625a0: 0x46141080  add.s       $f2, $f2, $f20
    ctx->pc = 0x1625a0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[20]);
    // 0x1625a4: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x1625a4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
    // 0x1625a8: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1625a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1625ac: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x1625acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x1625b0: 0xe6220014  swc1        $f2, 0x14($s1)
    ctx->pc = 0x1625b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x1625b4: 0xe6230024  swc1        $f3, 0x24($s1)
    ctx->pc = 0x1625b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
    // 0x1625b8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x1625b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x1625bc: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1625bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1625c0:
    // 0x1625c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1625c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1625c4: 0xe6b40000  swc1        $f20, 0x0($s5)
    ctx->pc = 0x1625c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x1625c8: 0x26b50040  addiu       $s5, $s5, 0x40
    ctx->pc = 0x1625c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 64));
    // 0x1625cc: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x1625ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1625d0: 0x26730040  addiu       $s3, $s3, 0x40
    ctx->pc = 0x1625d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 64));
    // 0x1625d4: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1625d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x1625d8: 0x26940040  addiu       $s4, $s4, 0x40
    ctx->pc = 0x1625d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    // 0x1625dc: 0x1440ff36  bnez        $v0, . + 4 + (-0xCA << 2)
    ctx->pc = 0x1625DCu;
    {
        const bool branch_taken_0x1625dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1625E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1625DCu;
        // 0x1625e0: 0x26520040  addiu       $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1625dc) {
            ctx->pc = 0x1622B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1622b8;
        }
    }
    ctx->pc = 0x1625E4u;
label_1625e4:
    // 0x1625e4: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1625e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1625e8: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1625e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1625ec: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x1625ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1625f0: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x1625f0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1625f4: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x1625f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1625f8: 0xdfb50088  ld          $s5, 0x88($sp)
    ctx->pc = 0x1625f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1625fc: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x1625fcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x162600: 0xdfb70098  ld          $s7, 0x98($sp)
    ctx->pc = 0x162600u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x162604: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x162604u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x162608: 0xdfbf00a8  ld          $ra, 0xA8($sp)
    ctx->pc = 0x162608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16260c: 0xc7b600c0  lwc1        $f22, 0xC0($sp)
    ctx->pc = 0x16260cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x162610: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x162610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x162614: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x162614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x162618: 0x3e00008  jr          $ra
    ctx->pc = 0x162618u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162618u;
        // 0x16261c: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162618u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162620u;
}
